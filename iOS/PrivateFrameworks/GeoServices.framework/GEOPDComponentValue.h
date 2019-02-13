//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONonComponentPlaceData, GEOPDAddress, GEOPDAddressObject, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDCaptionedPhoto, GEOPDContainedPlace, GEOPDETA, GEOPDEntity, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDHours, GEOPDIcon, GEOPDLocationEvent, GEOPDMessageLink, GEOPDPhoto, GEOPDPlaceInfo, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDRoadAccessInfo, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule, GEOPDVenueInfo, GEOPDWifiFingerprint, GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddress *_address;
    GEOPDAddressObject *_addressObject;
    GEOPDAmenities *_amenities;
    GEOPDAnnotatedItemList *_annotatedItemList;
    GEOPDAssociatedApp *_associatedApp;
    GEOPDBounds *_bounds;
    GEOPDBrowseCategories *_browseCategories;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDCaptionedPhoto *_captionedPhoto;
    GEONonComponentPlaceData *_clientExtNonComponentData;
    GEOPDContainedPlace *_containedPlace;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDExternalAction *_externalAction;
    GEOPDFactoid *_factoid;
    GEOPDFlyover *_flyover;
    GEOPDHours *_hours;
    GEOPDIcon *_icon;
    GEOPDLocationEvent *_locationEvent;
    GEOPDMessageLink *_messageLink;
    GEOPDPhoto *_photo;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    GEOPDPlacecardURL *_placecardUrl;
    GEOPDPoiEvent *_poiEvent;
    GEOPDPriceDescription *_priceDescription;
    GEOPDQuickLink *_quickLink;
    GEOPDRap *_rap;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    GEOPDResultSnippet *_resultSnippet;
    GEOPDReview *_review;
    GEOPDSimpleRestaurantMenuText *_simpleRestaurantMenuText;
    GEOPDSpatialLookupResult *_spatialLookupResult;
    GEOStyleAttributes *_styleAttributes;
    GEOPDTextBlock *_textBlock;
    GEOPDTip *_tip;
    GEOPDTransitAttribution *_transitAttribution;
    GEOPDTransitIncident *_transitIncident;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    GEOPDTransitSchedule *_transitSchedule;
    GEOPDVenueInfo *_venueInfo;
    GEOPDWifiFingerprint *_wifiFingerprint;
}

@property(retain, nonatomic) GEOPDPlacecardLayoutConfiguration *placecardLayoutConfiguration; // @synthesize placecardLayoutConfiguration=_placecardLayoutConfiguration;
@property(retain, nonatomic) GEOPDPoiEvent *poiEvent; // @synthesize poiEvent=_poiEvent;
@property(retain, nonatomic) GEOPDAnnotatedItemList *annotatedItemList; // @synthesize annotatedItemList=_annotatedItemList;
@property(retain, nonatomic) GEOPDBrowseCategories *browseCategories; // @synthesize browseCategories=_browseCategories;
@property(retain, nonatomic) GEOPDPriceDescription *priceDescription; // @synthesize priceDescription=_priceDescription;
@property(retain, nonatomic) GEOPDIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) GEOPDWifiFingerprint *wifiFingerprint; // @synthesize wifiFingerprint=_wifiFingerprint;
@property(retain, nonatomic) GEOPDContainedPlace *containedPlace; // @synthesize containedPlace=_containedPlace;
@property(retain, nonatomic) GEOPDVenueInfo *venueInfo; // @synthesize venueInfo=_venueInfo;
@property(retain, nonatomic) GEOPDLocationEvent *locationEvent; // @synthesize locationEvent=_locationEvent;
@property(retain, nonatomic) GEOPDRap *rap; // @synthesize rap=_rap;
@property(retain, nonatomic) GEOPDQuickLink *quickLink; // @synthesize quickLink=_quickLink;
@property(retain, nonatomic) GEOPDMessageLink *messageLink; // @synthesize messageLink=_messageLink;
@property(retain, nonatomic) GEOPDAssociatedApp *associatedApp; // @synthesize associatedApp=_associatedApp;
@property(retain, nonatomic) GEOPDPlacecardURL *placecardUrl; // @synthesize placecardUrl=_placecardUrl;
@property(retain, nonatomic) GEOPDTip *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) GEOPDSpatialLookupResult *spatialLookupResult; // @synthesize spatialLookupResult=_spatialLookupResult;
@property(retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink; // @synthesize restaurantReservationLink=_restaurantReservationLink;
@property(retain, nonatomic) GEOPDSimpleRestaurantMenuText *simpleRestaurantMenuText; // @synthesize simpleRestaurantMenuText=_simpleRestaurantMenuText;
@property(retain, nonatomic) GEOPDAddressObject *addressObject; // @synthesize addressObject=_addressObject;
@property(retain, nonatomic) GEOPDResultSnippet *resultSnippet; // @synthesize resultSnippet=_resultSnippet;
@property(retain, nonatomic) GEOPDExternalAction *externalAction; // @synthesize externalAction=_externalAction;
@property(retain, nonatomic) GEOPDTransitInfoSnippet *transitInfoSnippet; // @synthesize transitInfoSnippet=_transitInfoSnippet;
@property(retain, nonatomic) GEOPDCaptionedPhoto *captionedPhoto; // @synthesize captionedPhoto=_captionedPhoto;
@property(retain, nonatomic) GEOPDBusinessClaim *businessClaim; // @synthesize businessClaim=_businessClaim;
@property(retain, nonatomic) GEOPDTransitAttribution *transitAttribution; // @synthesize transitAttribution=_transitAttribution;
@property(retain, nonatomic) GEOPDFactoid *factoid; // @synthesize factoid=_factoid;
@property(retain, nonatomic) GEOPDTextBlock *textBlock; // @synthesize textBlock=_textBlock;
@property(retain, nonatomic) GEOPDTransitIncident *transitIncident; // @synthesize transitIncident=_transitIncident;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEOPDAmenities *amenities; // @synthesize amenities=_amenities;
@property(retain, nonatomic) GEOPDRawAttribute *rawAttribute; // @synthesize rawAttribute=_rawAttribute;
@property(retain, nonatomic) GEOPDFlyover *flyover; // @synthesize flyover=_flyover;
@property(retain, nonatomic) GEOPDETA *eta; // @synthesize eta=_eta;
@property(retain, nonatomic) GEOPDTransitSchedule *transitSchedule; // @synthesize transitSchedule=_transitSchedule;
@property(retain, nonatomic) GEOPDTransitInfo *transitInfo; // @synthesize transitInfo=_transitInfo;
@property(retain, nonatomic) GEOPDHours *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) GEOPDPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) GEOPDReview *review; // @synthesize review=_review;
@property(retain, nonatomic) GEOPDRating *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) GEOPDAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) GEOPDBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) GEOPDRoadAccessInfo *accessInfo; // @synthesize accessInfo=_accessInfo;
@property(retain, nonatomic) GEOPDPlaceInfo *placeInfo; // @synthesize placeInfo=_placeInfo;
@property(retain, nonatomic) GEOPDEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlacecardLayoutConfiguration;
@property(readonly, nonatomic) _Bool hasPoiEvent;
@property(readonly, nonatomic) _Bool hasAnnotatedItemList;
@property(readonly, nonatomic) _Bool hasBrowseCategories;
@property(readonly, nonatomic) _Bool hasPriceDescription;
@property(readonly, nonatomic) _Bool hasIcon;
@property(readonly, nonatomic) _Bool hasWifiFingerprint;
@property(readonly, nonatomic) _Bool hasContainedPlace;
@property(readonly, nonatomic) _Bool hasVenueInfo;
@property(readonly, nonatomic) _Bool hasLocationEvent;
@property(readonly, nonatomic) _Bool hasRap;
@property(readonly, nonatomic) _Bool hasQuickLink;
@property(readonly, nonatomic) _Bool hasMessageLink;
@property(readonly, nonatomic) _Bool hasAssociatedApp;
@property(readonly, nonatomic) _Bool hasPlacecardUrl;
@property(readonly, nonatomic) _Bool hasTip;
@property(readonly, nonatomic) _Bool hasSpatialLookupResult;
@property(readonly, nonatomic) _Bool hasRestaurantReservationLink;
@property(readonly, nonatomic) _Bool hasSimpleRestaurantMenuText;
@property(readonly, nonatomic) _Bool hasAddressObject;
@property(readonly, nonatomic) _Bool hasResultSnippet;
@property(readonly, nonatomic) _Bool hasExternalAction;
@property(readonly, nonatomic) _Bool hasTransitInfoSnippet;
@property(readonly, nonatomic) _Bool hasCaptionedPhoto;
@property(readonly, nonatomic) _Bool hasBusinessClaim;
@property(readonly, nonatomic) _Bool hasTransitAttribution;
@property(readonly, nonatomic) _Bool hasFactoid;
@property(readonly, nonatomic) _Bool hasTextBlock;
@property(readonly, nonatomic) _Bool hasTransitIncident;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasAmenities;
@property(readonly, nonatomic) _Bool hasRawAttribute;
@property(readonly, nonatomic) _Bool hasFlyover;
@property(readonly, nonatomic) _Bool hasEta;
@property(readonly, nonatomic) _Bool hasTransitSchedule;
@property(readonly, nonatomic) _Bool hasTransitInfo;
@property(readonly, nonatomic) _Bool hasHours;
@property(readonly, nonatomic) _Bool hasPhoto;
@property(readonly, nonatomic) _Bool hasReview;
@property(readonly, nonatomic) _Bool hasRating;
@property(readonly, nonatomic) _Bool hasAddress;
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasAccessInfo;
@property(readonly, nonatomic) _Bool hasPlaceInfo;
@property(readonly, nonatomic) _Bool hasEntity;
@property(retain, nonatomic) GEONonComponentPlaceData *clientExtNonComponentData;
@property(readonly, nonatomic) _Bool hasClientExtNonComponentData;

@end
