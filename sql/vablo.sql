--
-- PostgreSQL database dump
--

SET client_encoding = 'UTF8';
SET standard_conforming_strings = off;
SET check_function_bodies = false;
SET client_min_messages = warning;
SET escape_string_warning = off;

--
-- Name: plpgsql; Type: PROCEDURAL LANGUAGE; Schema: -; Owner: postgres
--

CREATE PROCEDURAL LANGUAGE plpgsql;


ALTER PROCEDURAL LANGUAGE plpgsql OWNER TO postgres;

SET search_path = public, pg_catalog;

--
-- Name: update_state_mtime(); Type: FUNCTION; Schema: public; Owner: postgres
--

CREATE FUNCTION update_state_mtime() RETURNS trigger
    AS $$
BEGIN UPDATE states SET mtime = now(); RETURN NEW; END; $$
    LANGUAGE plpgsql;


ALTER FUNCTION public.update_state_mtime() OWNER TO postgres;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Name: articles; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE articles (
    title character varying(40) NOT NULL,
    ctime timestamp without time zone DEFAULT now(),
    mtime timestamp without time zone DEFAULT now(),
    content text,
    headline character varying(80) NOT NULL,
    art_id integer NOT NULL,
    abstract text,
    author character varying(40)
);


ALTER TABLE public.articles OWNER TO postgres;

--
-- Name: comments; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE comments (
    comm_id integer NOT NULL,
    name character varying(40),
    mail character varying(40),
    home character varying(40),
    comment text,
    comm_ref integer,
    art_id integer,
    ctime timestamp without time zone DEFAULT now(),
    mtime timestamp without time zone DEFAULT now()
);


ALTER TABLE public.comments OWNER TO postgres;

--
-- Name: comments_comm_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE comments_comm_id_seq
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;


ALTER TABLE public.comments_comm_id_seq OWNER TO postgres;

--
-- Name: comments_comm_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE comments_comm_id_seq OWNED BY comments.comm_id;


--
-- Name: entries_ent_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE entries_ent_id_seq
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;


ALTER TABLE public.entries_ent_id_seq OWNER TO postgres;

--
-- Name: entries_ent_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE entries_ent_id_seq OWNED BY articles.art_id;


--
-- Name: states; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE states (
    id integer NOT NULL,
    mtime timestamp without time zone
);


ALTER TABLE public.states OWNER TO postgres;

--
-- Name: tags; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE tags (
    tag character varying(20),
    art_id integer
);


ALTER TABLE public.tags OWNER TO postgres;

--
-- Name: art_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE articles ALTER COLUMN art_id SET DEFAULT nextval('entries_ent_id_seq'::regclass);


--
-- Name: comm_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE comments ALTER COLUMN comm_id SET DEFAULT nextval('comments_comm_id_seq'::regclass);


--
-- Name: articles_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY articles
    ADD CONSTRAINT articles_pkey PRIMARY KEY (art_id);


--
-- Name: comments_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY comments
    ADD CONSTRAINT comments_pkey PRIMARY KEY (comm_id);


--
-- Name: states_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY states
    ADD CONSTRAINT states_pkey PRIMARY KEY (id);


--
-- Name: unique_title; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY articles
    ADD CONSTRAINT unique_title UNIQUE (title);


--
-- Name: comm_art_id_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX comm_art_id_idx ON comments USING btree (art_id);


--
-- Name: tags_art_id_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX tags_art_id_idx ON tags USING btree (art_id);


--
-- Name: tags_tag_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX tags_tag_idx ON tags USING hash (tag);


--
-- Name: update_state_mtime_on_update; Type: TRIGGER; Schema: public; Owner: postgres
--

CREATE TRIGGER update_state_mtime_on_update
    AFTER INSERT OR DELETE OR UPDATE ON articles
    FOR EACH STATEMENT
    EXECUTE PROCEDURE update_state_mtime();


--
-- Name: comments_art_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY comments
    ADD CONSTRAINT comments_art_id_fkey FOREIGN KEY (art_id) REFERENCES articles(art_id);


--
-- Name: tags_art_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY tags
    ADD CONSTRAINT tags_art_id_fkey FOREIGN KEY (art_id) REFERENCES articles(art_id);


--
-- Name: public; Type: ACL; Schema: -; Owner: postgres
--

REVOKE ALL ON SCHEMA public FROM PUBLIC;
REVOKE ALL ON SCHEMA public FROM postgres;
GRANT ALL ON SCHEMA public TO postgres;
GRANT ALL ON SCHEMA public TO PUBLIC;


--
-- Name: articles; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE articles FROM PUBLIC;
REVOKE ALL ON TABLE articles FROM postgres;
GRANT ALL ON TABLE articles TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE articles TO vablo;


--
-- Name: comments; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE comments FROM PUBLIC;
REVOKE ALL ON TABLE comments FROM postgres;
GRANT ALL ON TABLE comments TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE comments TO vablo;


--
-- Name: comments_comm_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE comments_comm_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE comments_comm_id_seq FROM postgres;
GRANT ALL ON SEQUENCE comments_comm_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE comments_comm_id_seq TO vablo;


--
-- Name: entries_ent_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE entries_ent_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE entries_ent_id_seq FROM postgres;
GRANT ALL ON SEQUENCE entries_ent_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE entries_ent_id_seq TO vablo;


--
-- Name: states; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE states FROM PUBLIC;
REVOKE ALL ON TABLE states FROM postgres;
GRANT ALL ON TABLE states TO postgres;
GRANT SELECT,UPDATE ON TABLE states TO vablo;


--
-- Name: tags; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE tags FROM PUBLIC;
REVOKE ALL ON TABLE tags FROM postgres;
GRANT ALL ON TABLE tags TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE tags TO vablo;


--
-- PostgreSQL database dump complete
--

