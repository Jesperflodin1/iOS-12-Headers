//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>
{
    MPModelObject *_modelObject;
    MPMediaLibraryAlbumAppData *_albumAppData;
}

@property(retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData; // @synthesize albumAppData=_albumAppData;
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
