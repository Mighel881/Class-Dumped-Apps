//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSData, NSString, WAPBContextInfo;

@interface WAPBMessage_ExtendedTextMessage : GPBMessage
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSString *titleWithSanitization;
@property(copy, nonatomic) NSString *description_pWithSanitization;
@property(copy, nonatomic) NSString *matchedTextWithSanitization;
@property(copy, nonatomic) NSString *textWithSanitization;

// Remaining properties
@property(nonatomic) unsigned int backgroundArgb; // @dynamic backgroundArgb;
@property(copy, nonatomic) NSString *canonicalURL; // @dynamic canonicalURL;
@property(retain, nonatomic) WAPBContextInfo *contextInfo; // @dynamic contextInfo;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool doNotPlayInline; // @dynamic doNotPlayInline;
@property(nonatomic) int font; // @dynamic font;
@property(nonatomic) _Bool hasBackgroundArgb; // @dynamic hasBackgroundArgb;
@property(nonatomic) _Bool hasCanonicalURL; // @dynamic hasCanonicalURL;
@property(nonatomic) _Bool hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDoNotPlayInline; // @dynamic hasDoNotPlayInline;
@property(nonatomic) _Bool hasFont; // @dynamic hasFont;
@property(nonatomic) _Bool hasJpegThumbnail; // @dynamic hasJpegThumbnail;
@property(nonatomic) _Bool hasMatchedText; // @dynamic hasMatchedText;
@property(nonatomic) _Bool hasPreviewType; // @dynamic hasPreviewType;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextArgb; // @dynamic hasTextArgb;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSData *jpegThumbnail; // @dynamic jpegThumbnail;
@property(copy, nonatomic) NSString *matchedText; // @dynamic matchedText;
@property(nonatomic) int previewType; // @dynamic previewType;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int textArgb; // @dynamic textArgb;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

