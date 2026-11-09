// gml_Script____struct___257_anon_12626_DefineTrinkets_TRINKETSINIT @ 0x1405ee300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___257_anon_12626_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_d0 = "gml_Script_anon@12325@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1e9;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1eb;
  uStack_fc = 0xf;
  local_108 = 0x100000000000106;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_1419ff928,0x80000000,&local_e8,uVar3,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 0;
  local_108 = 0x3ff0000000000000;
  iVar1 = FUN_140e851f0(&local_e8,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar1 != -2 && iVar1 < 0) {
    local_c8 = 0x1ec;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_108 = CONCAT44(uRam0000000141dc6764,_DAT_141dc6760);
    uStack_100 = uRam0000000141dc6768;
    uStack_fc = uRam0000000141dc676c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_108);
    local_50 = local_a8;
    local_108 = CONCAT44(uRam0000000141dc6764,_DAT_141dc6760);
    uStack_100 = uRam0000000141dc6768;
    uStack_fc = uRam0000000141dc676c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
    local_48 = local_98;
    local_108 = CONCAT44(uRam0000000141dd4d0c,_DAT_141dd4d08);
    uStack_100 = uRam0000000141dd4d10;
    uStack_fc = DAT_141dd4d14;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_108);
    local_40 = local_88;
    uStack_fc = 0xf;
    local_108 = 0x100000000000148;
    local_68 = 0x148;
    uStack_64 = 0x1000000;
    uStack_60 = uStack_100;
    uStack_5c = 0xf;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_68);
    local_38 = local_78;
    FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar4,DAT_141a0a7c8),&local_50);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

