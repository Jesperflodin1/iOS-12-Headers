//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSFileHandle;

@interface PBRemotePasteboardItemProviderInputStream : NSInputStream
{
    NSFileHandle *_fileHandle;
    int _fd;
}

+ (id)inputStreamWithFileHandle:(id)arg1;
- (void).cxx_destruct;
- (_Bool)hasBytesAvailable;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)initWithFileHandle:(id)arg1;

@end

