//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _complete;
}

- (void)_teardownSession;
- (id)_newDataWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)primeForAccountCreationWithData:(id)arg1 error:(id *)arg2;
@property(readonly, getter=isComplete) _Bool complete;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end
