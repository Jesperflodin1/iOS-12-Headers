/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property (readonly) NSSet * addedItems; 
@property (readonly) NSSet * removedItems; 
@property (readonly) NSSet * updatedItems; 
@required
-(void)updateWithChange:(id)arg1;
-(NSSet *)updatedItems;
-(BOOL)hasChanges;
-(NSSet *)addedItems;
-(NSSet *)removedItems;

@end

