/*****************************************************************************
 *
 * TempPointIn.h
 *	  Input of temporal points in WKT, EWKT and MF-JSON format
 *
 * Portions Copyright (c) 2019, Esteban Zimanyi, Arthur Lesuisse, 
 * 		Universite Libre de Bruxelles
 * Portions Copyright (c) 1996-2019, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *****************************************************************************/

#ifndef __TEMPPOINTIN_H__
#define __TEMPPOINTIN_H__

#include <postgres.h>
#include <catalog/pg_type.h>

/*****************************************************************************/

extern Datum tpoint_from_mfjson(PG_FUNCTION_ARGS);
extern Datum tpoint_from_ewkb(PG_FUNCTION_ARGS);

/*****************************************************************************/

#endif