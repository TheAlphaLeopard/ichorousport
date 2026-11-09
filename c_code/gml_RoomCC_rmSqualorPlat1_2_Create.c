// gml_RoomCC_rmSqualorPlat1_2_Create @ 0x1406778f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_RoomCC_rmSqualorPlat1_2_Create(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28 [2];
  
  local_80 = "gml_RoomCC_rmSqualorMiniBoss2_0_Create";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_78 = 1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00f58);
  uStack_14c = 0xf;
  local_158 = 0x100000000000089;
  local_168 = 0x89;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_68 = local_118;
  local_168 = _DAT_1419e7280;
  uStack_164 = uRam00000001419e7284;
  uStack_160 = uRam00000001419e7288;
  uStack_15c = uRam00000001419e728c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_168);
  local_60 = local_108;
  uStack_14c = 0xf;
  local_158 = 0x100000000000097;
  local_168 = 0x97;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_168);
  local_58 = local_f8;
  local_168 = _DAT_1419e7280;
  uStack_164 = uRam00000001419e7284;
  uStack_160 = uRam00000001419e7288;
  uStack_15c = uRam00000001419e728c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_168);
  local_50 = local_e8;
  uStack_14c = 0xf;
  local_158 = 0x100000000000097;
  local_168 = 0x97;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_150;
  uStack_15c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_48 = local_d8;
  local_168 = _DAT_1419e7270;
  uStack_164 = uRam00000001419e7274;
  uStack_160 = uRam00000001419e7278;
  uStack_15c = uRam00000001419e727c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_40 = local_c8;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar3,&local_68);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_b8) {
    local_168 = *puVar2;
    uStack_164 = puVar2[1];
    uStack_160 = puVar2[2];
    uStack_15c = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_168);
  }
  local_38 = local_b8;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar3,&local_48);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_a8) {
    local_168 = *puVar2;
    uStack_164 = puVar2[1];
    uStack_160 = puVar2[2];
    uStack_15c = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_168);
  }
  local_30 = local_a8;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_138,2,CONCAT44(uVar4,DAT_1419fdca8),&local_38);
  if (puVar2 != local_98) {
    local_168 = *puVar2;
    uStack_164 = puVar2[1];
    uStack_160 = puVar2[2];
    uStack_15c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_168);
  }
  local_28[0] = local_98;
  FUN_140e63610(param_1,param_2,&local_128,1,uVar1,local_28);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

