//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFWallpaperEditCollectionBuilder, NSString;

@interface HFHomeBuilder : HFItemBuilder
{
    NSString *_name;
    NSString *_userNotes;
    HFWallpaperEditCollectionBuilder *_wallpaperBuilder;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder; // @synthesize wallpaperBuilder=_wallpaperBuilder;
@property(copy, nonatomic) NSString *userNotes; // @synthesize userNotes=_userNotes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)updateUserNotes;
- (id)updateName;
- (id)createHome;
- (id)performValidation;
- (id)commitItem;
- (void)setHome:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end
