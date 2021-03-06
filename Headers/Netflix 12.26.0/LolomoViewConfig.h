//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LolomoViewConfig : NSObject
{
    struct {
        _Bool hasSpecialTreatment;
    } _continueWatching;
    struct {
        _Bool isROAREnabled;
    } _roar;
    struct {
        _Bool isBigRowEnabled;
    } _bigRow;
    struct {
        _Bool showsHorizontalDisplayArt;
    } _defaultList;
    struct {
        _Bool isCharacterRowCapable;
    } _kids;
    struct {
        _Bool isMotionBoxartEnabled;
    } _motion;
    _Bool _precacheEntities;
    _Bool _sectionHeaders;
    _Bool _sectionHeadersSticky;
    CDStruct_f129f184 _billboard;
}

@property(nonatomic) _Bool sectionHeadersSticky; // @synthesize sectionHeadersSticky=_sectionHeadersSticky;
@property(nonatomic) _Bool sectionHeaders; // @synthesize sectionHeaders=_sectionHeaders;
@property(nonatomic) _Bool precacheEntities; // @synthesize precacheEntities=_precacheEntities;
@property(nonatomic) CDStruct_b31ca263 motion; // @synthesize motion=_motion;
@property(nonatomic) CDStruct_b31ca263 kids; // @synthesize kids=_kids;
@property(nonatomic) CDStruct_b31ca263 defaultList; // @synthesize defaultList=_defaultList;
@property(nonatomic) CDStruct_b31ca263 bigRow; // @synthesize bigRow=_bigRow;
@property(nonatomic) CDStruct_b31ca263 roar; // @synthesize roar=_roar;
@property(nonatomic) CDStruct_b31ca263 continueWatching; // @synthesize continueWatching=_continueWatching;
@property(nonatomic) CDStruct_f129f184 billboard; // @synthesize billboard=_billboard;

@end

