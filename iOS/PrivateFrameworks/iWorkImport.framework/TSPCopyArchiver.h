//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPArchiver.h>

#import <iWorkImport/TSPProxyObjectMappingProvider-Protocol.h>

@protocol TSPProxyObjectMapping;

__attribute__((visibility("hidden")))
@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>
{
    id <TSPProxyObjectMapping> _proxyObjectMapping;
}

@property(nonatomic) __weak id <TSPProxyObjectMapping> proxyObjectMapping; // @synthesize proxyObjectMapping=_proxyObjectMapping;
- (void).cxx_destruct;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference *)arg2;
@property(readonly, nonatomic) long long targetType;

@end
