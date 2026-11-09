// gml_Script_pal_fade_set @ 0x1403b1150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_pal_fade_set(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_238;
  byte local_22c;
  undefined4 local_228 [3];
  byte local_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined4 local_208 [3];
  byte local_1fc;
  undefined4 local_1f8 [3];
  byte local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  undefined4 *local_1c8;
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_250 = "gml_Script_pal_swap_init_system_light";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 0x145;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_238,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5478);
  uStack_26c = 0xffffff;
  local_278 = 0;
  uStack_25c = 0xffffff;
  local_268 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5208);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5038);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5308);
  local_28c = 0;
  local_298 = 0;
  local_34 = 0;
  local_40 = 0;
  local_44 = 0;
  local_50 = 0;
  local_54 = 0;
  local_60 = 0;
  local_64 = 0;
  local_70 = 0;
  local_74 = 0;
  local_80 = 0;
  local_84 = 0;
  local_90 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 0x147;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1e8,gml_Script____struct___138_pal_swap_init_system_light_lighting_system,0);
  if (&local_1e8 != puVar1) {
    local_288 = (undefined4)local_1e8;
    uStack_284 = local_1e8._4_4_;
    uStack_280 = uStack_1e0;
    uStack_27c = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_288);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_238) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_288);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1d8 = &local_238;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_40,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_228) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_288);
  }
  local_1d0 = local_228;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_50,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_218) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_288);
  }
  local_1c8 = local_218;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_60,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_208) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_288);
  }
  local_1c0 = local_208;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_70,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_1f8) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
  }
  local_1b8 = local_1f8;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,5,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_278) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_288);
  }
  local_248 = 0x15b;
  uStack_1dc = 0xf;
  local_1e8 = 0x10000080000000c;
  local_288 = 0xc;
  uStack_284 = 0x1000008;
  uStack_280 = uStack_1e0;
  uStack_27c = 0xf;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_288);
  local_248 = 0x15d;
  local_288 = (undefined4)local_268;
  uStack_284 = local_268._4_4_;
  uStack_280 = uStack_260;
  uStack_27c = uStack_25c;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_288);
  FUN_140e87930(&local_278,DAT_1419f5388,0x80000000,&local_c0);
  local_248 = 0x15e;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd24a8;
  uStack_284 = uRam0000000141dd24ac;
  uStack_280 = uRam0000000141dd24b0;
  uStack_27c = DAT_141dd24b4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_e0) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5028,0,&local_e0);
  local_248 = 0x15f;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2498;
  uStack_284 = uRam0000000141dd249c;
  uStack_280 = uRam0000000141dd24a0;
  uStack_27c = DAT_141dd24a4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_f0) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f4f88,0,&local_f0);
  local_248 = 0x160;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2488;
  uStack_284 = uRam0000000141dd248c;
  uStack_280 = uRam0000000141dd2490;
  uStack_27c = DAT_141dd2494;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_100) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_288);
  }
  FUN_140e87930(&local_278,DAT_141a57830,0,&local_100);
  local_248 = 0x161;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2508;
  uStack_284 = uRam0000000141dd250c;
  uStack_280 = uRam0000000141dd2510;
  uStack_27c = DAT_141dd2514;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_1419f54d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_110) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_288);
  }
  FUN_140e87930(&local_278,DAT_141a08768,0,&local_110);
  local_248 = 0x163;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar6 = CONCAT44(uVar7,DAT_1419f5158);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_120) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5248,0x80000000,&local_120);
  local_248 = 0x164;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar6 = CONCAT44(uVar7,DAT_1419f5158);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_130) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f4f38,0x80000000,&local_130);
  local_248 = 0x165;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar6 = CONCAT44(uVar7,DAT_1419ff3e8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_140) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5398,0x80000000,&local_140);
  local_248 = 0x167;
  FUN_140e609c0(DAT_141a729d8);
  if (&local_278 != puVar2) {
    local_288 = (undefined4)local_278;
    uStack_284 = local_278._4_4_;
    uStack_280 = uStack_270;
    uStack_27c = uStack_26c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_288);
  }
  FUN_140e60910(1);
  local_248 = 0x169;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1e8,gml_Script_pal_light_set,0);
  if (&local_1e8 != puVar3) {
    local_288 = (undefined4)local_1e8;
    uStack_284 = local_1e8._4_4_;
    uStack_280 = uStack_1e0;
    uStack_27c = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_288);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_238) {
    local_288 = *(undefined4 *)puVar3;
    uStack_284 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_280 = *(undefined4 *)(puVar3 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_288);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1d8 = &local_238;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_80,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_228) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_288);
  }
  local_1d0 = local_228;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_90,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_218) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_288);
  }
  local_1c8 = local_218;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_a0,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_208) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_288);
  }
  local_1c0 = local_208;
  puVar5 = (undefined4 *)FUN_140e8da20(&local_b0,param_1,1,&DAT_141dc6520);
  if (puVar5 != local_1f8) {
    local_288 = *puVar5;
    uStack_284 = puVar5[1];
    uStack_280 = puVar5[2];
    uStack_27c = puVar5[3];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
  }
  local_1b8 = local_1f8;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,5,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_278) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_288);
  }
  local_248 = 0x17d;
  uStack_1dc = 0xf;
  local_1e8 = 0x10000080000000b;
  local_288 = 0xb;
  uStack_284 = 0x1000008;
  uStack_280 = uStack_1e0;
  uStack_27c = 0xf;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_288);
  local_248 = 0x17f;
  local_288 = (undefined4)local_268;
  uStack_284 = local_268._4_4_;
  uStack_280 = uStack_260;
  uStack_27c = uStack_25c;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_288);
  FUN_140e87930(&local_278,DAT_1419f5388,0x80000000,&local_d0);
  local_248 = 0x180;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd24a8;
  uStack_284 = uRam0000000141dd24ac;
  uStack_280 = uRam0000000141dd24b0;
  uStack_27c = DAT_141dd24b4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_150) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5028,0,&local_150);
  local_248 = 0x181;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2498;
  uStack_284 = uRam0000000141dd249c;
  uStack_280 = uRam0000000141dd24a0;
  uStack_27c = DAT_141dd24a4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_160) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f4f88,0,&local_160);
  local_248 = 0x182;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2488;
  uStack_284 = uRam0000000141dd248c;
  uStack_280 = uRam0000000141dd2490;
  uStack_27c = DAT_141dd2494;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_141a04778);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_170) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_288);
  }
  FUN_140e87930(&local_278,DAT_141a57830,0,&local_170);
  local_248 = 0x183;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  local_1d8 = &local_268;
  local_288 = _DAT_141dd2508;
  uStack_284 = uRam0000000141dd250c;
  uStack_280 = uRam0000000141dd2510;
  uStack_27c = DAT_141dd2514;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_288);
  local_1d0 = local_228;
  uVar6 = CONCAT44(uVar7,DAT_1419f54d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar6,&local_1d8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_180) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_288);
  }
  FUN_140e87930(&local_278,DAT_141a08768,0,&local_180);
  local_248 = 0x185;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar6 = CONCAT44(uVar7,DAT_1419f5158);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_190) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5248,0x80000000,&local_190);
  local_248 = 0x186;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar6 = CONCAT44(uVar7,DAT_1419f5158);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,uVar6,0);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != &local_1a0) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f4f38,0x80000000,&local_1a0);
  local_248 = 0x187;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,0,CONCAT44(uVar7,DAT_1419ff3e8),0)
  ;
  if (puVar1 != &local_1b0) {
    local_288 = *(undefined4 *)puVar1;
    uStack_284 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_280 = *(undefined4 *)(puVar1 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    FUN_140041b80(&local_1b0,&local_288);
  }
  FUN_140e87930(&local_278,DAT_1419f5398,0x80000000,&local_1b0);
  local_248 = 0x189;
  FUN_140e609c0(DAT_141a729d8);
  if (&local_278 != puVar4) {
    local_288 = (undefined4)local_278;
    uStack_284 = local_278._4_4_;
    uStack_280 = uStack_270;
    uStack_27c = uStack_26c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_288);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_258;
  return param_3;
}

