/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIDraggingItemVisualTarget;
#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDraggingItem, NSItemProvider, NSArray, _DUIPreview, _DUIVisibleDroppedItem, UITargetedDragPreview, UIView, _DUIItemDetail;

@interface _UIInternalDraggingItem : NSObject {

	BOOL _forSource;
	BOOL _locallyModified;
	_UIDraggingItem* _publicDraggingItem;
	NSItemProvider* _provider;
	id _localObject;
	id _privateLocalContext;
	/*^block*/id _imageComponentsProvider;
	/*^block*/id _originalImageComponentsProvider;
	NSArray* _imageComponents;
	unsigned long long _options;
	double _scale;
	double _rotationAngle;
	/*^block*/id _previewProvider;
	/*^block*/id _originalPreviewProvider;
	_DUIPreview* _preview;
	id<_UIDraggingItemVisualTarget> _sourceVisualTarget;
	id<_UIDraggingItemVisualTarget> _destinationVisualTarget;
	_DUIVisibleDroppedItem* _visibleDroppedItem;
	UITargetedDragPreview* _targetedDropPreview;
	CGPoint _anchorPoint;

}

@property (nonatomic,readonly) _UIDraggingItem * publicDraggingItem;                                      //@synthesize publicDraggingItem=_publicDraggingItem - In the implementation block
@property (nonatomic,retain) NSItemProvider * provider;                                                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) id localObject;                                                              //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,retain) id privateLocalContext;                                                      //@synthesize privateLocalContext=_privateLocalContext - In the implementation block
@property (nonatomic,copy) id imageComponentsProvider;                                                    //@synthesize imageComponentsProvider=_imageComponentsProvider - In the implementation block
@property (nonatomic,copy) id originalImageComponentsProvider;                                            //@synthesize originalImageComponentsProvider=_originalImageComponentsProvider - In the implementation block
@property (nonatomic,copy) NSArray * imageComponents;                                                     //@synthesize imageComponents=_imageComponents - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                                         //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double scale;                                                                //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                                        //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,copy) id previewProvider;                                                            //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id originalPreviewProvider;                                                    //@synthesize originalPreviewProvider=_originalPreviewProvider - In the implementation block
@property (nonatomic,retain) _DUIPreview * preview;                                                       //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDraggingItemVisualTarget> sourceVisualTarget;                   //@synthesize sourceVisualTarget=_sourceVisualTarget - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDraggingItemVisualTarget> destinationVisualTarget;              //@synthesize destinationVisualTarget=_destinationVisualTarget - In the implementation block
@property (assign,nonatomic) BOOL locallyModified;                                                        //@synthesize locallyModified=_locallyModified - In the implementation block
@property (nonatomic,retain) _DUIVisibleDroppedItem * visibleDroppedItem;                                 //@synthesize visibleDroppedItem=_visibleDroppedItem - In the implementation block
@property (nonatomic,readonly) UIView * droppedSnapshotView; 
@property (nonatomic,retain) UITargetedDragPreview * targetedDropPreview;                                 //@synthesize targetedDropPreview=_targetedDropPreview - In the implementation block
@property (nonatomic,readonly) _DUIItemDetail * druidItemDetail; 
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned long long)options;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setSourceVisualTarget:(id<_UIDraggingItemVisualTarget>)arg1 ;
-(_DUIPreview *)preview;
-(UIView *)droppedSnapshotView;
-(void)setTargetedDropPreview:(UITargetedDragPreview *)arg1 ;
-(UITargetedDragPreview *)targetedDropPreview;
-(void)setLocalObject:(id)arg1 ;
-(id)localObject;
-(void)setImageComponentsProvider:(id)arg1 ;
-(_UIDraggingItem *)publicDraggingItem;
-(void)setPreviewProvider:(id)arg1 ;
-(id)previewProvider;
-(id)imageComponentsProvider;
-(NSItemProvider *)provider;
-(id)privateLocalContext;
-(void)setDestinationVisualTarget:(id<_UIDraggingItemVisualTarget>)arg1 ;
-(id<_UIDraggingItemVisualTarget>)destinationVisualTarget;
-(_DUIVisibleDroppedItem *)visibleDroppedItem;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(NSArray *)imageComponents;
-(void)setImageComponents:(NSArray *)arg1 ;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(id<_UIDraggingItemVisualTarget>)sourceVisualTarget;
-(id)initWithPublicDraggingItem:(id)arg1 ;
-(id)druidImageComponentsWithSlotOwner:(id)arg1 ;
-(id)resolvedPreview;
-(_DUIItemDetail *)druidItemDetail;
-(void)updateFromDruidItemDetail:(id)arg1 ;
-(void)setVisibleDroppedItem:(_DUIVisibleDroppedItem *)arg1 ;
-(void)updateFromPublicDraggingItem;
-(void)setPrivateLocalContext:(id)arg1 ;
-(id)originalImageComponentsProvider;
-(void)setOriginalImageComponentsProvider:(id)arg1 ;
-(id)originalPreviewProvider;
-(void)setOriginalPreviewProvider:(id)arg1 ;
-(id)resolvedImageComponents;
-(void)setLocallyModified:(BOOL)arg1 ;
-(id)initWithItemProvider:(id)arg1 detail:(id)arg2 ;
-(void)updateToPublicDraggingItem;
-(void)setProvider:(NSItemProvider *)arg1 ;
-(BOOL)locallyModified;
@end

