//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSDictionary;

@interface ZSWTaggedStringAttribute : NSObject <NSCopying>
{
    NSDictionary *_staticDictionary;
    CDUnknownBlockType _dynamicAttributes;
}

@property(copy, nonatomic) CDUnknownBlockType dynamicAttributes; // @synthesize dynamicAttributes=_dynamicAttributes;
@property(copy, nonatomic) NSDictionary *staticDictionary; // @synthesize staticDictionary=_staticDictionary;
- (void).cxx_destruct;
- (id)attributesForTag:(id)arg1 forString:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
