//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager
{
    NSString *_queryString;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (void)queryStringDidChange;

// Remaining properties
@property(readonly, nonatomic) PXRecipientSearchDataSource *dataSource; // @dynamic dataSource;

@end
