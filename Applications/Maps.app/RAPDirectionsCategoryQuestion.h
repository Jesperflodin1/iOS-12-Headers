//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPMenuQuestion.h"

@class RAPQuestion;
@protocol RAPMenuItem, RAPUserDirectionRequest;

__attribute__((visibility("hidden")))
@interface RAPDirectionsCategoryQuestion : RAPMenuQuestion
{
    id <RAPUserDirectionRequest> _selectedValue;
    RAPQuestion<RAPMenuItem> *_betterRouteAvailableMenuItem;
}

+ (id)localizedHeaderText;
@property(readonly, nonatomic) id <RAPUserDirectionRequest> selectedValue; // @synthesize selectedValue=_selectedValue;
- (void).cxx_destruct;
- (id)followUpQuestionForCategory:(long long)arg1;
@property(readonly, nonatomic) RAPQuestion<RAPMenuItem> *betterRouteAvailableMenuItem; // @synthesize betterRouteAvailableMenuItem=_betterRouteAvailableMenuItem;
@property(readonly, nonatomic) _Bool shouldShowBetterRouteAvailable;
- (_Bool)shouldShowTransitLineQuestion;
- (_Bool)canDisplayMenuItemForQuestionCategory:(long long)arg1;
- (id)mainMenuQuestionCategories;
- (void)resetBadRouteSuggestionsQuestion;
- (long long)questionCategory;
- (int)analyticTarget;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 directions:(id)arg3;

@end

