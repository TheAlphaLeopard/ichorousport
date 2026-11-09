// gml_Script_perlin_noise_range @ 0x14042e420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_perlin_noise_range
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  longlong local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined1 *local_50;
  
  local_c0 = "gml_Script__perlin_noise";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x10;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddee50) {
    _Init_thread_header(&DAT_141ddee50);
    if (DAT_141ddee50 == -1) {
      DAT_141ddee40 = (longlong *)FUN_140e63aa0(DAT_1419f6dc8);
      _Init_thread_footer(&DAT_141ddee50);
    }
  }
  if (DAT_141ddc172 == '\0') {
    FUN_140e64380(DAT_141ddee40,"gml_Script__perlin_noise");
    FUN_140e64380(param_1,"gml_Script__perlin_noise");
  }
  local_b8 = 0x13;
  if (DAT_141ddc172 == '\0') {
    DAT_141ddc172 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddee40 + 0x10))(DAT_141ddee40,DAT_1419f6d88);
    FUN_140e609c0(DAT_141ddee40);
    uVar7 = 0;
    puVar3 = (undefined8 *)gml_Script_create_perlin_hash_table(param_1,param_2,&local_108,0,0);
    if (puVar3 != puVar2) {
      local_138 = *puVar3;
      uStack_130 = *(undefined4 *)(puVar3 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_138);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x14;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddee40 + 8))(DAT_141ddee40,DAT_1419f6d88);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_d8);
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  local_11c = local_cc;
  local_120 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_128 = local_d8;
  }
  else {
    FUN_1400419b0(&local_128,&local_d8);
  }
  FUN_140042560(&local_128,puVar6);
  if (0 < param_4) {
    puVar2 = (undefined8 *)*param_5;
  }
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_118,puVar2);
  }
  FUN_1400460e0(&local_118,&local_128);
  local_138 = local_118;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_68 = local_a8;
  if (puVar3 != &local_98) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  local_60 = &local_98;
  uVar8 = CONCAT44(uVar7,DAT_1419fe728);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar8,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar1 = FUN_140e4a8b0(uVar4);
  local_88 = (ulonglong)(uVar1 & 0xfffff) * 4;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 10;
  local_58 = &local_88;
  local_138 = CONCAT44(uRam00000001419e4c64,_DAT_1419e4c60);
  uStack_130 = uRam00000001419e4c68;
  uStack_12c = uRam00000001419e4c6c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_50 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar7,DAT_141a0a178),&local_60);
  uVar7 = 0xffffff;
  if (puVar2 != &local_e8) {
    local_138 = *puVar2;
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    FUN_140041b80(&local_e8,&local_138);
    uVar7 = local_dc;
  }
  local_b8 = 0x15;
  local_120 = local_e0;
  bVar5 = (byte)uVar7 & 0x1f;
  local_11c = uVar7;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_128 = local_e8;
  }
  else {
    FUN_1400419b0(&local_128,&local_e8);
  }
  uStack_12c = 0;
  local_138 = 0x3fe0000000000000;
  FUN_1400462a0(&local_128,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_10c = local_11c;
  uStack_110 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_118 = local_128;
  }
  else {
    FUN_1400419b0(&local_118,&local_128);
  }
  uStack_12c = 7;
  local_138 = CONCAT44(local_138._4_4_,2);
  FUN_140042560(&local_118,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (&local_118 != param_3) {
    local_138 = local_118;
    uStack_130 = uStack_110;
    uStack_12c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

