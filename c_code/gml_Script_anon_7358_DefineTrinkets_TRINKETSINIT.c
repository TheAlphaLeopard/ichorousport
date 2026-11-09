// gml_Script_anon_7358_DefineTrinkets_TRINKETSINIT @ 0x1405e4200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7358_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  ulonglong local_78;
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong *local_48;
  
  local_d0 = "gml_Script_anon@5394@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xc3;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xc4;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
  local_158 = 0;
  local_148 = 0;
  uStack_140 = uStack_150;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_148);
  FUN_140e87930(uVar2,DAT_1419ffc18,0x80000000,&local_e8);
  local_c8 = 0xc5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_150._4_4_ = 0xf;
  local_158 = 0x1000000000000ee;
  plVar6 = param_1;
  FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
  uVar7 = (undefined4)((ulonglong)plVar6 >> 0x20);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_150._0_4_ = local_110;
  uStack_150._4_4_ = local_10c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_158 = local_118;
  }
  else {
    FUN_1400419b0(&local_158,&local_118);
  }
  uVar1 = uStack_150._4_4_;
  local_148 = local_158;
  uStack_140 = CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e87930(uVar2,DAT_1419ff908,0x80000000,&local_f8);
  local_c8 = 0xc6;
  local_148 = CONCAT44(uRam0000000141dd48bc,_DAT_141dd48b8);
  uStack_140 = CONCAT44(DAT_141dd48c4,uRam0000000141dd48c0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar2,DAT_1419ffc28,0x80000000,&local_108);
  local_c8 = 200;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff9d8);
  uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = 0x100000200000077;
  local_148 = 0x100000200000077;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_150);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = 0x100000200000078;
  local_148 = 0x100000200000078;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_150);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_60 = local_a8;
  uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = 0x100000200000079;
  local_148 = 0x100000200000079;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_150);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  local_58 = local_98;
  uVar5 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar5 == 0xf) {
    uVar5 = 0x4000004;
  }
  else {
    uVar5 = uVar5 | 0x1000000;
  }
  uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = CONCAT44(uVar5,DAT_1419ef3f8) & 0xffffffff00ffffff;
  local_148 = CONCAT44(uVar5,DAT_1419ef3f8) & 0xffffffff00ffffff;
  uStack_140 = CONCAT44(0xf,(undefined4)uStack_150);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_148);
  uVar2 = CONCAT44(uVar7,DAT_1419fdca8);
  local_50 = local_88;
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,3,uVar2,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != &local_78) {
    local_148 = *puVar4;
    uStack_140 = puVar4[1];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_148);
  }
  local_48 = &local_78;
  FUN_140e609c0(param_1);
  puVar4 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar7,DAT_1419fd6d8),&local_50);
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

