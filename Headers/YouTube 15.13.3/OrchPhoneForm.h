//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchFormHeader, OrchPhoneFormValue;

@interface OrchPhoneForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *countryCallingCodeArray; // @dynamic countryCallingCodeArray;
@property(readonly, nonatomic) unsigned long long countryCallingCodeArray_Count; // @dynamic countryCallingCodeArray_Count;
@property(copy, nonatomic) NSString *defaultRegionCode; // @dynamic defaultRegionCode;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasDefaultRegionCode; // @dynamic hasDefaultRegionCode;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasInitialValue; // @dynamic hasInitialValue;
@property(nonatomic) _Bool hasIsDisabled; // @dynamic hasIsDisabled;
@property(nonatomic) _Bool hasIsFormInlined; // @dynamic hasIsFormInlined;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) OrchPhoneFormValue *initialValue; // @dynamic initialValue;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isFormInlined; // @dynamic isFormInlined;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *regionCodeArray; // @dynamic regionCodeArray;
@property(readonly, nonatomic) unsigned long long regionCodeArray_Count; // @dynamic regionCodeArray_Count;

@end
