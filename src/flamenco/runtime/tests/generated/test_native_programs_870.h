#include "../fd_tests.h"
int test_870(fd_executor_test_suite_t *suite) {
  fd_executor_test_t test;
  fd_memset( &test, 0, FD_EXECUTOR_TEST_FOOTPRINT );
  test.disable_cnt = 0;
  test.bt = "   2: solana_stake_program::stake_instruction::tests::test_stake_initialize             at ./src/stake_instruction.rs:1564:24   3: solana_stake_program::stake_instruction::tests::test_stake_initialize::all_enabled             at ./src/stake_instruction.rs:1526:5   4: solana_stake_program::stake_instruction::tests::test_stake_initialize::all_enabled::{{closure}}             at ./src/stake_instruction.rs:1526:5   5: core::ops::function::FnOnce::call_once             at /rustc/cc66ad468955717ab92600c770da8c1601a4ff33/library/core/src/ops/function.rs:250:5";
  test.test_name = "stake_instruction::tests::test_stake_initialize::all_enabled";
  test.test_number = 870;
  test.sysvar_cache.clock = "";
  test.sysvar_cache.epoch_schedule = "";
  test.sysvar_cache.epoch_rewards = "";
  test.sysvar_cache.fees = "";
  test.sysvar_cache.rent = "mA0AAAAAAAAAAAAAAAAAQDI=";
  test.sysvar_cache.slot_hashes = "";
  test.sysvar_cache.stake_history = "";
  test.sysvar_cache.slot_history = "";
  if (fd_executor_test_suite_check_filter(suite, &test)) return -9999;
  ulong test_accs_len = 3;
  fd_executor_test_acc_t* test_accs = fd_alloca( 1UL, FD_EXECUTOR_TEST_ACC_FOOTPRINT * test_accs_len );
  fd_memset( test_accs, 0, FD_EXECUTOR_TEST_ACC_FOOTPRINT * test_accs_len );

 // {'clock': '', 'epoch_schedule': '', 'epoch_rewards': '', 'fees': '', 'rent': 'mA0AAAAAAAAAAAAAAAAAQDI=', 'slot_hashes': '', 'recent_blockhashes': '', 'stake_history': '', 'last_restart_slot': ''}
  fd_executor_test_acc_t* test_acc = test_accs;
  fd_base58_decode_32( "tyZuguC6BXm6JWMZ826KfYsd21Lc6PKDEcaRaX1fEs5",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 2282880UL;
  test_acc->result_lamports = 2282880UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  static uchar const fd_flamenco_native_prog_test_870_acc_0_data[] = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
  test_acc->data            = fd_flamenco_native_prog_test_870_acc_0_data;
  test_acc->data_len        = 200UL;
  static uchar const fd_flamenco_native_prog_test_870_acc_0_post_data[] = { 0x01,0x00,0x00,0x00,0x80,0xd5,0x22,0x00,0x00,0x00,0x00,0x00,0x0d,0x50,0x95,0x0b,0xc0,0x70,0x38,0x1e,0x60,0x5f,0x87,0x67,0xc9,0x4e,0xf7,0x33,0xe2,0x2f,0x4d,0x60,0x0f,0x0e,0x4b,0x55,0x23,0x65,0x9a,0x9a,0x7a,0x32,0x4e,0x1c,0x0d,0x50,0x95,0x0b,0xc0,0x70,0x38,0x1e,0x60,0x5f,0x87,0x67,0xc9,0x4e,0xf7,0x33,0xe2,0x2f,0x4d,0x60,0x0f,0x0e,0x4b,0x55,0x23,0x65,0x9a,0x9a,0x7a,0x32,0x4e,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5f,0x11,0x8d,0x61,0x8a,0x61,0x11,0xc6,0x01,0xe3,0x71,0x5c,0x89,0x49,0x25,0x87,0x3f,0xf3,0x6f,0x2e,0x12,0xbb,0xe8,0xfe,0x31,0x57,0x66,0x9b,0x59,0x08,0x44,0xb6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
  test_acc->result_data     = fd_flamenco_native_prog_test_870_acc_0_post_data;
  test_acc->result_data_len = 200UL;
  test_acc++;
  fd_base58_decode_32( "SysvarRent111111111111111111111111111111111",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "Sysvar1111111111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "Sysvar1111111111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 1UL;
  test_acc->result_lamports = 1UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  static uchar const fd_flamenco_native_prog_test_870_acc_1_data[] = { 0x98,0x0d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x32 };
  test_acc->data            = fd_flamenco_native_prog_test_870_acc_1_data;
  test_acc->data_len        = 17UL;
  static uchar const fd_flamenco_native_prog_test_870_acc_1_post_data[] = { 0x98,0x0d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x32 };
  test_acc->result_data     = fd_flamenco_native_prog_test_870_acc_1_post_data;
  test_acc->result_data_len = 17UL;
  test_acc++;
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "NativeLoader1111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "NativeLoader1111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 0UL;
  test_acc->result_lamports = 0UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  test_acc++;
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (unsigned char *) &test.program_id);
  static uchar const fd_flamenco_native_prog_test_870_raw[] = { 0x00,0x00,0x00,0x02,0x03,0x0d,0x50,0x95,0x0b,0xc0,0x70,0x38,0x1e,0x60,0x5f,0x87,0x67,0xc9,0x4e,0xf7,0x33,0xe2,0x2f,0x4d,0x60,0x0f,0x0e,0x4b,0x55,0x23,0x65,0x9a,0x9a,0x7a,0x32,0x4e,0x1c,0x06,0xa1,0xd8,0x17,0x91,0x37,0x54,0x2a,0x98,0x34,0x37,0xbd,0xfe,0x2a,0x7a,0xb2,0x55,0x7f,0x53,0x5c,0x8a,0x78,0x72,0x2b,0x68,0xa4,0x9d,0xc0,0x00,0x00,0x00,0x00,0x06,0xa7,0xd5,0x17,0x19,0x2c,0x5c,0x51,0x21,0x8c,0xc9,0x4c,0x3d,0x4a,0xf1,0x7f,0x58,0xda,0xee,0x08,0x9b,0xa1,0xfd,0x44,0xe3,0xdb,0xd9,0x8a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x00,0x02,0x74,0x00,0x00,0x00,0x00,0x0d,0x50,0x95,0x0b,0xc0,0x70,0x38,0x1e,0x60,0x5f,0x87,0x67,0xc9,0x4e,0xf7,0x33,0xe2,0x2f,0x4d,0x60,0x0f,0x0e,0x4b,0x55,0x23,0x65,0x9a,0x9a,0x7a,0x32,0x4e,0x1c,0x0d,0x50,0x95,0x0b,0xc0,0x70,0x38,0x1e,0x60,0x5f,0x87,0x67,0xc9,0x4e,0xf7,0x33,0xe2,0x2f,0x4d,0x60,0x0f,0x0e,0x4b,0x55,0x23,0x65,0x9a,0x9a,0x7a,0x32,0x4e,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5f,0x11,0x8d,0x61,0x8a,0x61,0x11,0xc6,0x01,0xe3,0x71,0x5c,0x89,0x49,0x25,0x87,0x3f,0xf3,0x6f,0x2e,0x12,0xbb,0xe8,0xfe,0x31,0x57,0x66,0x9b,0x59,0x08,0x44,0xb6 };
  test.raw_tx = fd_flamenco_native_prog_test_870_raw;
  test.raw_tx_len = 255UL;
  test.expected_result = 0;
  test.custom_err = 0;

  test.accs_len = test_accs_len;
  test.accs = test_accs;

  return fd_executor_run_test( &test, suite );
}
// https://explorer.solana.com/tx/inspector?message=AAACAw1QlQvAcDgeYF%2BHZ8lO9zPiL01gDw5LVSNlmpp6Mk4cBqHYF5E3VCqYNDe9%2Fip6slV%2FU1yKeHIraKSdwAAAAAAGp9UXGSxcUSGMyUw9SvF%2FWNruCJuh%2FUTj29mKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQECAAJ0AAAAAA1QlQvAcDgeYF%2BHZ8lO9zPiL01gDw5LVSNlmpp6Mk4cDVCVC8BwOB5gX4dnyU73M%2BIvTWAPDktVI2WamnoyThwAAAAAAAAAAAEAAAAAAAAAXxGNYYphEcYB43FciUklhz%2Fzby4Su%2Bj%2BMVdmm1kIRLY%3D
