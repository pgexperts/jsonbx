#ifndef __JSONBX_H__
#define __JSONBX_H__


extern char * JsonbToCStringWorker(StringInfo out, JsonbContainer *in, int estimated_len, bool pretty_print);
extern JsonbValue* setPath(JsonbIterator **it, Datum *path_elems, bool *path_nulls, int path_len,
        JsonbParseState  **st, int level, Jsonb *newval, bool create);

extern JsonbValue * IteratorConcat(JsonbIterator **it1, JsonbIterator **it2, JsonbParseState **state);

#endif
