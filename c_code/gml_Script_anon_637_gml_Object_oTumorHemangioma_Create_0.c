// gml_Script_anon_637_gml_Object_oTumorHemangioma_Create_0 @ 0x140de7870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_637_gml_Object_oTumorHemangioma_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
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
  
  local_110 = "gml_Object_oTumorHemangioma_Create_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_108 = 3;
  FUN_140e98b30(param_1,param_2);
  local_108 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3468);
  FUN_140e609c0(param_1);
  uStack_13c = 0xf;
  local_148 = 0x1000001000003dc;
  if (&local_148 != puVar1) {
    local_138 = 0x1000001000003dc;
    uStack_130 = uStack_140;
    uStack_12c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 6;
  uStack_13c = 0xf;
  local_148 = 0x1000001000003e0;
  local_138 = 0x1000001000003e0;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d0);
  local_108 = 8;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_e0);
  local_108 = 9;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_f0);
  local_108 = 0xb;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025e8);
  local_148 = CONCAT44(uRam0000000141dc7924,_DAT_141dc7920);
  uStack_140 = uRam0000000141dc7928;
  uStack_13c = uRam0000000141dc792c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  FUN_140e609c0(param_1);
  uVar5 = CONCAT44(uVar6,DAT_141a0a0d8);
  puVar3 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar5,&local_68);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_130 = (undefined4)puVar3[1];
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_138,puVar3);
  }
  uStack_13c = 7;
  local_148 = CONCAT44(local_148._4_4_,3);
  FUN_140042560(&local_138,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (&local_138 != puVar2) {
    local_148 = local_138;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_108 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02608);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4018000000000000;
  local_108 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_108 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02618);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_108 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02628);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fe8000000000000;
  local_108 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fe8000000000000;
  local_108 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02638);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_108 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_108 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_108 = 0x19;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 5;
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0c08);
  uStack_13c = 0xf;
  local_148 = 0x1000002000001b3;
  local_138 = 0x1000002000001b3;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_68 = local_b8;
  uStack_13c = 0xf;
  local_148 = 0x1000002000001b4;
  local_138 = 0x1000002000001b4;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_60 = local_a8;
  uStack_13c = 0xf;
  local_148 = 0x1000002000001b5;
  local_138 = 0x1000002000001b5;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_138);
  local_58 = local_98;
  uVar4 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar4 == 0xf) {
    uVar4 = 0x4000004;
  }
  else {
    uVar4 = uVar4 | 0x1000000;
  }
  uStack_13c = 0xf;
  local_148 = CONCAT44(uVar4,DAT_1419ef3f8) & 0xffffffff00ffffff;
  local_138 = CONCAT44(uVar4,DAT_1419ef3f8) & 0xffffffff00ffffff;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_50 = local_88;
  uVar5 = CONCAT44(uVar6,DAT_1419fdca8);
  puVar3 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_100,3,uVar5,&local_68);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_78) {
    local_148 = *puVar3;
    uStack_140 = (undefined4)puVar3[1];
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_148);
  }
  local_48 = &local_78;
  FUN_140e609c0(param_1);
  puVar3 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar6,DAT_1419fd6d8),&local_50);
  if (puVar3 != puVar2) {
    local_148 = *puVar3;
    uStack_140 = (undefined4)puVar3[1];
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x1c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Object_oTumorHemangioma_Step_0,param_1);
  if (&local_148 != puVar1) {
    local_138 = local_148;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x25;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Object_oTumorHemo_Create_0,param_1);
  if (&local_148 != puVar1) {
    local_138 = local_148;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

