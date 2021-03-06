#import <CoreSuggestions/SGEntityTagPrefixOptions.h>
#import <CoreSuggestions/SGEntityTag.h>
#import <CoreSuggestions/SGObjCRuntime.h>
#import <CoreSuggestions/SGFuture.h>
#import <CoreSuggestions/SGEventGeocode.h>
#import <CoreSuggestions/SGPostalAddressComponents.h>
#import <CoreSuggestions/SGPostalAddress.h>
#import <CoreSuggestions/SGDaemonConnection.h>
#import <CoreSuggestions/SGKeyValueCacheFile.h>
#import <CoreSuggestions/SGRemoteObjectProxy.h>
#import <CoreSuggestions/SGServiceCacheGuardedData.h>
#import <CoreSuggestions/SGSuggestionsService.h>
#import <CoreSuggestions/SGRealtimeEvent.h>
#import <CoreSuggestions/SGMSqliteErrors.h>
#import <CoreSuggestions/SGMSuggestdExitReason.h>
#import <CoreSuggestions/SGMContactInBanner.h>
#import <CoreSuggestions/SGMContactConfirmed.h>
#import <CoreSuggestions/SGMContactRejected.h>
#import <CoreSuggestions/SGMContactDetailConfirmed.h>
#import <CoreSuggestions/SGMContactDetailUsed.h>
#import <CoreSuggestions/SGMContactDetailRejected.h>
#import <CoreSuggestions/SGMMaybeInformationShown.h>
#import <CoreSuggestions/SGMUnknownContactInformationShown.h>
#import <CoreSuggestions/SGMContactOpportunityInSpotlight.h>
#import <CoreSuggestions/SGMEventOpportunityInSpotlight.h>
#import <CoreSuggestions/SGMEventInBanner.h>
#import <CoreSuggestions/SGMEventBannerConfirmed.h>
#import <CoreSuggestions/SGMEventBannerRejected.h>
#import <CoreSuggestions/SGMEventICSOpportunity.h>
#import <CoreSuggestions/SGMContactResultInSpotlight.h>
#import <CoreSuggestions/SGMContactResultSelectedInSpotlight.h>
#import <CoreSuggestions/SGMEventResultInSpotlight.h>
#import <CoreSuggestions/SGMEventResultSelectedInSpotlight.h>
#import <CoreSuggestions/SGMNoResultSelectedInSpotlight.h>
#import <CoreSuggestions/SGMOtherResultSelectedInSpotlight.h>
#import <CoreSuggestions/SGMNLEventInBanner.h>
#import <CoreSuggestions/SGMDDLinkShown.h>
#import <CoreSuggestions/SGMSelfIdPatternMatched.h>
#import <CoreSuggestions/SGMBadInteractionIgnored.h>
#import <CoreSuggestions/SGMContactDetailExtraction.h>
#import <CoreSuggestions/SGMContactDetailSent.h>
#import <CoreSuggestions/SGMAutocompleteUserSelectedContact.h>
#import <CoreSuggestions/SGMSearchResultsUserSelectedContact.h>
#import <CoreSuggestions/SGMSuggestedContactDetailUsed.h>
#import <CoreSuggestions/SGMSuggestedContactDetailShown.h>
#import <CoreSuggestions/SGMContactCreated.h>
#import <CoreSuggestions/SGMSearchResultsIncludedPureSuggestion.h>
#import <CoreSuggestions/SGMFoundInMailModelScore.h>
#import <CoreSuggestions/SGMSelfIdModelScore.h>
#import <CoreSuggestions/SGMBundleIdsMissingEntitlement.h>
#import <CoreSuggestions/SGMBundleIdsUsingOldEntitlement.h>
#import <CoreSuggestions/SGMBundleIdsTrackedAsOther.h>
#import <CoreSuggestions/SGMContactsInterfaceCacheHit.h>
#import <CoreSuggestions/SGMContactsInterfaceCacheCount.h>
#import <CoreSuggestions/SGMSerializedContactsCacheHit.h>
#import <CoreSuggestions/SGMCNtoSGContactsCacheHit.h>
#import <CoreSuggestions/SGMMailClientInMailApp.h>
#import <CoreSuggestions/SGMFoundInAppsICS.h>
#import <CoreSuggestions/SGSimpleNamedEmailAddress.h>
#import <CoreSuggestions/SGObject.h>
#import <CoreSuggestions/SGLocation.h>
#import <CoreSuggestions/SGName.h>
#import <CoreSuggestions/SGMatchedDetails.h>
#import <CoreSuggestions/SGWebPage.h>
#import <CoreSuggestions/SGEventMetadata.h>
#import <CoreSuggestions/SGNotificationListener.h>
#import <CoreSuggestions/SGOrigin.h>
#import <CoreSuggestions/SGSearchableItemHelper.h>
#import <CoreSuggestions/SGDSuggestManagerInterface.h>
#import <CoreSuggestions/SGRealtimeSuggestionMock.h>
#import <CoreSuggestions/SGSimpleTimeRange.h>
#import <CoreSuggestions/SGFn.h>
#import <CoreSuggestions/SGCircularBufferArray.h>
#import <CoreSuggestions/SGTimeZone.h>
#import <CoreSuggestions/SGTimeZoneDetector.h>
#import <CoreSuggestions/SGMatchinfoData.h>
#import <CoreSuggestions/SGRealtimeContact.h>
#import <CoreSuggestions/SGPhoneNumber.h>
#import <CoreSuggestions/SGEKEventConversions.h>
#import <CoreSuggestions/SGContactMatch.h>
#import <CoreSuggestions/SGEmailAddress.h>
#import <CoreSuggestions/SGPreferenceManager.h>
#import <CoreSuggestions/SGPreferenceStorage.h>
#import <CoreSuggestions/SGRecordId.h>
#import <CoreSuggestions/SGXPCResponse.h>
#import <CoreSuggestions/SGXPCResponse1.h>
#import <CoreSuggestions/SGXPCResponse2.h>
#import <CoreSuggestions/SGXPCResponse3.h>
#import <CoreSuggestions/SGMessagesDaemonConnection.h>
#import <CoreSuggestions/SGMessagesSuggestionsService.h>
#import <CoreSuggestions/SGMailMessageKey.h>
#import <CoreSuggestions/SGLabeledObject.h>
#import <CoreSuggestions/SGContact.h>
#import <CoreSuggestions/SGNLEventSuggestionsMetrics.h>
#import <CoreSuggestions/SGSuggestedActionMetrics.h>
#import <CoreSuggestions/SGPatternMetrics.h>
#import <CoreSuggestions/SGErrorMetrics.h>
#import <CoreSuggestions/SGSuggestionsICSMetrics.h>
#import <CoreSuggestions/SGEvent.h>
#import <CoreSuggestions/SGContactMatchArrayOption.h>
