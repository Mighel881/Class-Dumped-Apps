//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PGPhotoFilterDefinition : NSObject
{
    int _type;
    NSString *_identifier;
    NSString *_title;
    NSString *_lookupFilename;
    NSString *_shaderFilename;
    NSArray *_textureFilenames;
}

+ (id)definitionWithDictionary:(id)arg1;
+ (id)originalFilterDefinition;
@property(readonly, nonatomic) NSArray *textureFilenames; // @synthesize textureFilenames=_textureFilenames;
@property(readonly, nonatomic) NSString *shaderFilename; // @synthesize shaderFilename=_shaderFilename;
@property(readonly, nonatomic) NSString *lookupFilename; // @synthesize lookupFilename=_lookupFilename;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

