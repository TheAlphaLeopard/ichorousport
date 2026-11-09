// gml_Object_oRunResults_Alarm_0 @ 0x140d50050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oRunResults_Alarm_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  
  local_70 = "gml_Script_anon@1428@gml_Object_oRunResults_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x29;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_10c = 0;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de35dc) &&
     (_Init_thread_header(&DAT_141de35dc), DAT_141de35dc == -1)) {
    DAT_141de35e0 = FUN_140e63aa0(DAT_1419fe048);
    _Init_thread_footer(&DAT_141de35dc);
  }
  FUN_140e643a0(param_1,DAT_141de35e0);
  local_68 = 0x2b;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_140d50194:
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_f8);
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 != &local_88) goto LAB_140d50194;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_68 = 0x2c;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
    if (puVar2 == &local_98) goto LAB_140d50226;
  }
  local_f8 = *puVar2;
  uStack_f0 = *(undefined4 *)(puVar2 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_f8);
LAB_140d50226:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_68 = 0x2e;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a578c0);
  local_f8 = CONCAT44(uRam0000000141ddb54c,_DAT_141ddb548);
  uStack_f0 = uRam0000000141ddb550;
  uStack_ec = DAT_141ddb554;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_60 = local_d8;
  uStack_ec = DAT_141ddb3d4;
  uStack_f0 = DAT_141ddb3d0;
  if ((1 << ((byte)DAT_141ddb3d4 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141ddb3c8;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141ddb3c8);
  }
  uVar1 = uStack_ec;
  local_108 = (undefined4)local_f8;
  uStack_104 = local_f8._4_4_;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_58 = local_c8;
  puVar4 = (undefined4 *)gml_Script____struct___117(param_1,param_2,&local_e8,1,&local_60);
  if (puVar4 != local_b8) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
  }
  local_50 = local_b8;
  if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_a8)) {
    local_108 = *(undefined4 *)puVar5;
    uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  local_48 = &local_a8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_118,3,&local_58);
  if (puVar4 != puVar3) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  FUN_140e60910(1);
  local_68 = 0x2f;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a578c0);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46588);
  if (puVar3 != local_d8) {
    local_108 = *puVar3;
    uStack_104 = puVar3[1];
    uStack_100 = puVar3[2];
    uStack_fc = puVar3[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_108);
  }
  local_60 = local_d8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_58 = local_c8;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)gml_Script_seg_add(param_1,param_2,&local_118,2,&local_60);
  if (puVar3 != puVar4) {
    local_108 = *puVar3;
    uStack_104 = puVar3[1];
    uStack_100 = puVar3[2];
    uStack_fc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
  FUN_140e60910(1);
  local_68 = 0x30;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05568);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff8000000000000;
  local_68 = 0x31;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  local_108 = _DAT_1419ed980;
  uStack_104 = uRam00000001419ed984;
  uStack_100 = uRam00000001419ed988;
  uStack_fc = uRam00000001419ed98c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_60 = local_d8;
  local_108 = _DAT_1419ed990;
  uStack_104 = uRam00000001419ed994;
  uStack_100 = uRam00000001419ed998;
  uStack_fc = uRam00000001419ed99c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_58 = local_c8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e78db0(&local_118,2,&local_60);
  if (puVar4 != puVar3) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  FUN_140e60910(1);
  local_68 = 0x34;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff478);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,FUN_140d4f810,param_1);
  if (&local_f8 != puVar5) {
    local_108 = (undefined4)local_f8;
    uStack_104 = local_f8._4_4_;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

