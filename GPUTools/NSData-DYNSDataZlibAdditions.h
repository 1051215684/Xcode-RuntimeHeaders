/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (DYNSDataZlibAdditions)
+ (id)dy_dataWithContentsOfGzipFileAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)dy_decompressData:(id)arg1 inBuffer:(void *)arg2 bufferSize:(unsigned int)arg3 error:(id *)arg4;
+ (BOOL)dy_decompressData:(id)arg1 inMutableData:(id)arg2 error:(id *)arg3;
+ (id)dy_dataByDecompressingData:(id)arg1 error:(id *)arg2;
+ (id)dy_dataByCompressingData:(id)arg1 level:(int)arg2 error:(id *)arg3;
+ (id)dy_dataByCompressingData:(id)arg1 error:(id *)arg2;
- (unsigned int)dy_crc32;
@end

