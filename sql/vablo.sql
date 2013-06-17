--
-- PostgreSQL database dump
--

SET statement_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SET check_function_bodies = false;
SET client_min_messages = warning;

--
-- Name: plpgsql; Type: EXTENSION; Schema: -; Owner: 
--

CREATE EXTENSION IF NOT EXISTS plpgsql WITH SCHEMA pg_catalog;


--
-- Name: EXTENSION plpgsql; Type: COMMENT; Schema: -; Owner: 
--

COMMENT ON EXTENSION plpgsql IS 'PL/pgSQL procedural language';


SET search_path = public, pg_catalog;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Name: articles; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE articles (
    title character varying(40),
    ctime timestamp without time zone DEFAULT now(),
    mtime timestamp without time zone DEFAULT now(),
    content text,
    headline character varying(80),
    id integer NOT NULL,
    abstract text,
    oid integer NOT NULL,
    cid integer NOT NULL,
    read_level integer DEFAULT 126,
    write_level integer DEFAULT 126,
    add_level integer DEFAULT 126,
    comments_allow boolean DEFAULT true,
    comments_view boolean DEFAULT true
);


ALTER TABLE public.articles OWNER TO postgres;

--
-- Name: comments; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE comments (
    id integer NOT NULL,
    name character varying(40),
    mail character varying(40),
    home character varying(40),
    comment text,
    comm_ref integer,
    art_id integer,
    ctime timestamp without time zone DEFAULT now(),
    mtime timestamp without time zone DEFAULT now(),
    oid integer NOT NULL,
    cid integer NOT NULL,
    read_level integer DEFAULT 126,
    write_level integer DEFAULT 126,
    add_level integer DEFAULT 126
);


ALTER TABLE public.comments OWNER TO postgres;

--
-- Name: comments_comm_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE comments_comm_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.comments_comm_id_seq OWNER TO postgres;

--
-- Name: comments_comm_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE comments_comm_id_seq OWNED BY comments.id;


--
-- Name: context_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE context_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.context_id_seq OWNER TO postgres;

--
-- Name: context; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE context (
    id integer DEFAULT nextval('context_id_seq'::regclass) NOT NULL,
    name character varying(40) NOT NULL,
    read_level integer DEFAULT 126 NOT NULL,
    add_level integer DEFAULT 126 NOT NULL,
    write_level integer DEFAULT 126 NOT NULL,
    url_base character varying(40)
);


ALTER TABLE public.context OWNER TO postgres;

--
-- Name: context_admins; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE context_admins (
    id integer NOT NULL,
    member integer NOT NULL
);


ALTER TABLE public.context_admins OWNER TO postgres;

--
-- Name: context_privileged; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE context_privileged (
    id integer NOT NULL,
    member integer NOT NULL
);


ALTER TABLE public.context_privileged OWNER TO postgres;

--
-- Name: context_unprivileged; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE context_unprivileged (
    id integer NOT NULL,
    member integer NOT NULL
);


ALTER TABLE public.context_unprivileged OWNER TO postgres;

--
-- Name: entries_ent_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE entries_ent_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.entries_ent_id_seq OWNER TO postgres;

--
-- Name: entries_ent_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE entries_ent_id_seq OWNED BY articles.id;


--
-- Name: tags; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE tags (
    tag character varying(20),
    art_id integer
);


ALTER TABLE public.tags OWNER TO postgres;

--
-- Name: vuser_u_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE vuser_u_id_seq
    START WITH 1001
    INCREMENT BY 1
    MINVALUE 1001
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.vuser_u_id_seq OWNER TO postgres;

--
-- Name: vpasswd_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE vpasswd_id_seq
    START WITH 1001
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.vpasswd_id_seq OWNER TO postgres;

--
-- Name: vpasswd; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE vpasswd (
    id integer DEFAULT nextval('vpasswd_id_seq'::regclass) NOT NULL,
    salt character varying(32),
    hash character varying(32),
    mtime timestamp without time zone DEFAULT now(),
    ctime timestamp without time zone DEFAULT now(),
    oid integer NOT NULL,
    cid integer NOT NULL,
    read_level integer DEFAULT 126,
    write_level integer DEFAULT 126,
    add_level integer DEFAULT 126
);


ALTER TABLE public.vpasswd OWNER TO postgres;

--
-- Name: vuser; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE vuser (
    id integer DEFAULT nextval('vuser_u_id_seq'::regclass) NOT NULL,
    mtime timestamp without time zone DEFAULT now(),
    ctime timestamp without time zone DEFAULT now(),
    logname character varying(16),
    dispname character varying,
    oid integer NOT NULL,
    cid integer NOT NULL,
    read_level integer DEFAULT 126,
    write_level integer DEFAULT 126,
    add_level integer DEFAULT 126,
    pw_id integer DEFAULT 0 NOT NULL
);


ALTER TABLE public.vuser OWNER TO postgres;

--
-- Name: id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY articles ALTER COLUMN id SET DEFAULT nextval('entries_ent_id_seq'::regclass);


--
-- Name: id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY comments ALTER COLUMN id SET DEFAULT nextval('comments_comm_id_seq'::regclass);


--
-- Data for Name: articles; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY articles (title, ctime, mtime, content, headline, id, abstract, oid, cid, read_level, write_level, add_level, comments_allow, comments_view) FROM stdin;
\.


--
-- Data for Name: comments; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY comments (id, name, mail, home, comment, comm_ref, art_id, ctime, mtime, oid, cid, read_level, write_level, add_level) FROM stdin;
\.


--
-- Name: comments_comm_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('comments_comm_id_seq', 0, true);


--
-- Data for Name: context; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY context (id, name, read_level, add_level, write_level, url_base) FROM stdin;
0	default	126	126	126	default
2	blog	2	14	30	article
3	passwd	2	62	36	passwd
1	public	2	62	30	
5	comments	2	2	62	comments
4	users	2	62	30	admin
\.


--
-- Data for Name: context_admins; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY context_admins (id, member) FROM stdin;
\.


--
-- Name: context_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('context_id_seq', 5, true);


--
-- Data for Name: context_privileged; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY context_privileged (id, member) FROM stdin;
\.


--
-- Data for Name: context_unprivileged; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY context_unprivileged (id, member) FROM stdin;
\.


--
-- Name: entries_ent_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('entries_ent_id_seq', 0, true);


--
-- Data for Name: tags; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY tags (tag, art_id) FROM stdin;
\.


--
-- Name: vuser_u_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('vuser_u_id_seq', 1000, true);


--
-- Data for Name: vpasswd; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY vpasswd (id, salt, hash, mtime, ctime, oid, cid, read_level, write_level, add_level) FROM stdin;
1000	1f4ebbc5032e27da87cb7d567c489295	05467a865f7cd437c9093a026f75f09e	2013-06-15 14:51:45.147494	2013-06-01 13:36:21.817158	1000	3	2	126	126
\.


--
-- Name: vpasswd_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('vpasswd_id_seq', 1000, true);


--
-- Data for Name: vuser; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY vuser (id, mtime, ctime, logname, dispname, oid, cid, read_level, write_level, add_level, pw_id) FROM stdin;
1000	2013-06-01 13:31:42.531282	2013-06-01 13:31:42.531282	admin	Admin	1000	4	2	126	126	1000
\.


--
-- Name: articles_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY articles
    ADD CONSTRAINT articles_pkey PRIMARY KEY (id);


--
-- Name: comments_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY comments
    ADD CONSTRAINT comments_pkey PRIMARY KEY (id);


--
-- Name: context_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY context
    ADD CONSTRAINT context_pkey PRIMARY KEY (id);


--
-- Name: dispname_uniq; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY vuser
    ADD CONSTRAINT dispname_uniq UNIQUE (dispname);


--
-- Name: unique_title; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY articles
    ADD CONSTRAINT unique_title UNIQUE (title);


--
-- Name: vuser_logname_key; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY vuser
    ADD CONSTRAINT vuser_logname_key UNIQUE (logname);


--
-- Name: vuser_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY vuser
    ADD CONSTRAINT vuser_pkey PRIMARY KEY (id);


--
-- Name: vpasswd_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY vpasswd
    ADD CONSTRAINT vpasswd_pkey PRIMARY KEY (id);


--
-- Name: comm_art_id_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX comm_art_id_idx ON comments USING btree (art_id);


--
-- Name: context_admin_ids; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_admin_ids ON context_admins USING btree (id);


--
-- Name: context_admin_member; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_admin_member ON context_admins USING btree (member);


--
-- Name: context_names; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_names ON context USING btree (name);


--
-- Name: context_privileged_ids; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_privileged_ids ON context_privileged USING btree (id);


--
-- Name: context_privileged_member; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_privileged_member ON context_privileged USING btree (member);


--
-- Name: context_unprivileged_ids; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_unprivileged_ids ON context_unprivileged USING btree (id);


--
-- Name: context_unprivileged_member; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX context_unprivileged_member ON context_unprivileged USING btree (member);


--
-- Name: tags_art_id_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX tags_art_id_idx ON tags USING btree (art_id);


--
-- Name: tags_tag_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX tags_tag_idx ON tags USING hash (tag);


--
-- Name: vuser_logname_idx; Type: INDEX; Schema: public; Owner: postgres; Tablespace: 
--

CREATE INDEX vuser_logname_idx ON vuser USING btree (logname);


--
-- Name: comments_art_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY comments
    ADD CONSTRAINT comments_art_id_fkey FOREIGN KEY (art_id) REFERENCES articles(id);


--
-- Name: context_admins_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY context_admins
    ADD CONSTRAINT context_admins_id_fkey FOREIGN KEY (id) REFERENCES context(id);


--
-- Name: context_privileged_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY context_privileged
    ADD CONSTRAINT context_privileged_id_fkey FOREIGN KEY (id) REFERENCES context(id);


--
-- Name: context_unprivileged_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY context_unprivileged
    ADD CONSTRAINT context_unprivileged_id_fkey FOREIGN KEY (id) REFERENCES context(id);


--
-- Name: tags_art_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY tags
    ADD CONSTRAINT tags_art_id_fkey FOREIGN KEY (art_id) REFERENCES articles(id);


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
-- Name: context_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE context_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE context_id_seq FROM postgres;
GRANT ALL ON SEQUENCE context_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE context_id_seq TO vablo;


--
-- Name: context; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE context FROM PUBLIC;
REVOKE ALL ON TABLE context FROM postgres;
GRANT ALL ON TABLE context TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE context TO vablo;


--
-- Name: context_admins; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE context_admins FROM PUBLIC;
REVOKE ALL ON TABLE context_admins FROM postgres;
GRANT ALL ON TABLE context_admins TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE context_admins TO vablo;


--
-- Name: context_privileged; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE context_privileged FROM PUBLIC;
REVOKE ALL ON TABLE context_privileged FROM postgres;
GRANT ALL ON TABLE context_privileged TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE context_privileged TO vablo;


--
-- Name: context_unprivileged; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE context_unprivileged FROM PUBLIC;
REVOKE ALL ON TABLE context_unprivileged FROM postgres;
GRANT ALL ON TABLE context_unprivileged TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE context_unprivileged TO vablo;


--
-- Name: entries_ent_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE entries_ent_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE entries_ent_id_seq FROM postgres;
GRANT ALL ON SEQUENCE entries_ent_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE entries_ent_id_seq TO vablo;


--
-- Name: tags; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE tags FROM PUBLIC;
REVOKE ALL ON TABLE tags FROM postgres;
GRANT ALL ON TABLE tags TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE tags TO vablo;


--
-- Name: vuser_u_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE vuser_u_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE vuser_u_id_seq FROM postgres;
GRANT ALL ON SEQUENCE vuser_u_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE vuser_u_id_seq TO vablo;


--
-- Name: vpasswd_id_seq; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON SEQUENCE vpasswd_id_seq FROM PUBLIC;
REVOKE ALL ON SEQUENCE vpasswd_id_seq FROM postgres;
GRANT ALL ON SEQUENCE vpasswd_id_seq TO postgres;
GRANT UPDATE ON SEQUENCE vpasswd_id_seq TO vablo;


--
-- Name: vpasswd; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE vpasswd FROM PUBLIC;
REVOKE ALL ON TABLE vpasswd FROM postgres;
GRANT ALL ON TABLE vpasswd TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE vpasswd TO vablo;


--
-- Name: vuser; Type: ACL; Schema: public; Owner: postgres
--

REVOKE ALL ON TABLE vuser FROM PUBLIC;
REVOKE ALL ON TABLE vuser FROM postgres;
GRANT ALL ON TABLE vuser TO postgres;
GRANT SELECT,INSERT,DELETE,UPDATE ON TABLE vuser TO vablo;


--
-- PostgreSQL database dump complete
--

