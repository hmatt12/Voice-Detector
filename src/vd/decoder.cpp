#include <vd/decoder.hpp>

Decoder::Decoder(FILE *audio_file) : FLAC::Decoder::File(), file(audio_file) {

}

::FLAC__StreamDecoderWriteStatus Decoder::write_callback(
    const ::FLAC__Frame *frame, const FLAC__int32 * const buffer[]) {


}

void Decoder::metadata_callback(const ::FLAC__StreamMetadata *metadata) {

}

void Decoder::error_callback(::FLAC__StreamDecoderErrorStatus err_status) {

}
