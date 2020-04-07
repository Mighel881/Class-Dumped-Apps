//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGCachable-Protocol.h>

@class NSArray, NSString;

@interface IBGBugCategory : NSObject <IBGCachable>
{
    NSString *_name;
    NSString *_slug;
    NSString *_imageName;
    NSArray *_subCategories;
}

@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)coderNameForSelector:(SEL)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (void)send;
- (id)subCategoriesFromDict:(id)arg1;
- (id)initWithName:(id)arg1 imageName:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
