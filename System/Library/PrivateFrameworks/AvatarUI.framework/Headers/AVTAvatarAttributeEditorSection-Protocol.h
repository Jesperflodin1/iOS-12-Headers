//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol AVTAvatarAttributeEditorSection;

@protocol AVTAvatarAttributeEditorSection <NSObject>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSArray *sectionItems;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id <AVTAvatarAttributeEditorSection>)arg1;
- (_Bool)shouldDisplayTitle;
@end

