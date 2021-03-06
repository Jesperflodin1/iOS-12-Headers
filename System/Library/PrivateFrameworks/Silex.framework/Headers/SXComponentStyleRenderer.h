//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXComponentStyle, SXComponentView, SXDocumentController, SXGradientFillView, SXImageFillView, SXVideoFillView, UIView;
@protocol SXGradientFactory, SXImageViewFactory;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer>
{
    _Bool _didRegisterForDynamicBounds;
    SXComponentStyle *_componentStyle;
    SXDocumentController *_documentController;
    id <SXImageViewFactory> _imageViewFactory;
    id <SXGradientFactory> _gradientFactory;
    SXComponentView *_componentView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
    UIView *_fillClippingView;
    UIView *_borderContainerView;
}

@property(nonatomic) _Bool didRegisterForDynamicBounds; // @synthesize didRegisterForDynamicBounds=_didRegisterForDynamicBounds;
@property(retain, nonatomic) UIView *borderContainerView; // @synthesize borderContainerView=_borderContainerView;
@property(retain, nonatomic) UIView *fillClippingView; // @synthesize fillClippingView=_fillClippingView;
@property(retain, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property(retain, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property(retain, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property(readonly, nonatomic) SXComponentStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)drawBorder:(id)arg1;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyFill:(id)arg1;
- (void)applyComponentStyle;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)prepareForComponentView:(id)arg1;
- (id)initWithComponentStyle:(id)arg1 documentController:(id)arg2 imageViewFactory:(id)arg3 gradientViewFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

