//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSDiscardableContent-Protocol.h>

@class NSData, UIImage;

@interface PSPDFImageFile : NSObject <NSDiscardableContent>
{
    NSData *_data;
    UIImage *_image;
    unsigned long long _discardCounter;
    struct CGSize _imageSize;
}

+ (id)imageFileWithData:(id)arg1;
@property(nonatomic) unsigned long long discardCounter; // @synthesize discardCounter=_discardCounter;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (_Bool)nonatomicIsContentDiscarded;
- (void)unload;
- (_Bool)load;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;

@end
