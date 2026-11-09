// gml_Script_anon_115_speaker_get_profile @ 0x1405161d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_115_speaker_get_profile(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_GlobalScript_speaker_get_profile";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd1a8);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd158);
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 1;
  FUN_140e609c0(DAT_141a729d8);
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,0,uVar4,0);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != puVar1) {
    local_158 = *puVar3;
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_158);
  }
  FUN_140e60910(1);
  local_88 = 2;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e609c0(DAT_141a729d8);
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,0,uVar4,0);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != puVar2) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(1);
  local_88 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd168);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_138,gml_Script_anon_440_speaker_get_profile,0);
  if (&local_138 != puVar1) {
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_88 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd188);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_138,gml_GlobalScript_SpriteBroadcast,0);
  if (&local_138 != puVar1) {
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_88 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd1c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_138,gml_Script_SpriteBroadcast,param_1);
  if (&local_138 != puVar1) {
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_158);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_88 = 0x2f;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd188);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_38);
  local_158 = local_38;
  uStack_150 = uStack_30;
  uStack_14c = uStack_2c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_78 = &local_118;
  if (puVar1 != &local_108) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000003e6;
  local_138 = 0x1000001000003e6;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  local_158 = CONCAT44(uRam00000001419e6024,_DAT_1419e6020);
  uStack_150 = uRam00000001419e6028;
  uStack_14c = uRam00000001419e602c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_60 = local_e8;
  local_158 = CONCAT44(uRam00000001419e5ff4,_DAT_1419e5ff0);
  uStack_150 = uRam00000001419e5ff8;
  uStack_14c = uRam00000001419e5ffc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  uVar4 = CONCAT44(uVar5,DAT_141a00c98);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_130 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_138,puVar2);
  }
  uStack_14c = 0;
  local_158 = 0x3fe8000000000000;
  FUN_140042560(&local_138,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_50 = local_c8;
  local_158 = CONCAT44(uRam00000001419e5fe4,_DAT_1419e5fe0);
  uStack_150 = uRam00000001419e5fe8;
  uStack_14c = uRam00000001419e5fec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_48 = local_b8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_148,6,uVar4,&local_70);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0x30;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_38);
  local_158 = local_38;
  uStack_150 = uStack_30;
  uStack_14c = uStack_2c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_78 = &local_118;
  if (puVar1 != &local_108) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000000fa;
  local_138 = 0x1000001000000fa;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  local_158 = CONCAT44(uRam00000001419e6034,_DAT_1419e6030);
  uStack_150 = uRam00000001419e6038;
  uStack_14c = uRam00000001419e603c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_60 = local_e8;
  local_158 = CONCAT44(uRam00000001419e6014,_DAT_1419e6010);
  uStack_150 = uRam00000001419e6018;
  uStack_14c = uRam00000001419e601c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  uVar4 = CONCAT44(uVar5,DAT_141a00c98);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_130 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_138,puVar1);
  }
  uStack_14c = 0;
  local_158 = 0x3fe999999999999a;
  FUN_140042560(&local_138,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_50 = local_c8;
  local_158 = CONCAT44(uRam00000001419e6004,_DAT_1419e6000);
  uStack_150 = uRam00000001419e6008;
  uStack_14c = uRam00000001419e600c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_48 = local_b8;
  local_158 = CONCAT44(uRam00000001419e5fd4,_DAT_1419e5fd0);
  uStack_150 = uRam00000001419e5fd8;
  uStack_14c = uRam00000001419e5fdc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  local_40 = local_a8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_148,7,uVar4,&local_70);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0x32;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd168);
  if (puVar1 != &local_118) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_78 = &local_118;
  local_158 = CONCAT44(uRam0000000141dd3ccc,_DAT_141dd3cc8);
  uStack_150 = uRam0000000141dd3cd0;
  uStack_14c = DAT_141dd3cd4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000000fa;
  local_138 = 0x1000001000000fa;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_148,3,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0x33;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar1 != &local_118) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_78 = &local_118;
  local_158 = CONCAT44(uRam0000000141dd3cbc,_DAT_141dd3cb8);
  uStack_150 = uRam0000000141dd3cc0;
  uStack_14c = DAT_141dd3cc4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000003e6;
  local_138 = 0x1000001000003e6;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_148,3,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0x34;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar1 != &local_118) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_78 = &local_118;
  local_158 = CONCAT44(uRam0000000141dd3cec,_DAT_141dd3ce8);
  uStack_150 = uRam0000000141dd3cf0;
  uStack_14c = DAT_141dd3cf4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000000fa;
  local_138 = 0x1000001000000fa;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  FUN_140e634e0(param_1,param_2,&local_148,3,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0x35;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar1 != &local_118) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_78 = &local_118;
  local_158 = CONCAT44(uRam0000000141dd3cdc,_DAT_141dd3cd8);
  uStack_150 = uRam0000000141dd3ce0;
  uStack_14c = DAT_141dd3ce4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_70 = &local_108;
  uStack_14c = 0xf;
  local_158 = 0x1000001000003e6;
  local_138 = 0x1000001000003e6;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_68 = local_f8;
  FUN_140e634e0(param_1,param_2,&local_148,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_78);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

