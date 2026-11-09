// gml_Object_oCredits_Alarm_0 @ 0x1408d07b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oCredits_Alarm_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  local_d0 = "gml_Script_anon@304@anon@29@gml_Object_oCredits_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x16;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x16;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_c8 = 0x16;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
      if (puVar4 == (undefined8 *)&DAT_141dd7948) goto LAB_1408d08fa;
    }
    local_108 = _DAT_141dd7948;
    uStack_104 = uRam0000000141dd794c;
    uStack_100 = uRam0000000141dd7950;
    uStack_fc = DAT_141dd7954;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
LAB_1408d08fa:
  if ((int)local_68[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4014000000000000;
  }
  local_c8 = 0x18;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58190);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58170);
  if (puVar3 != local_b8) {
    local_108 = *puVar3;
    uStack_104 = puVar3[1];
    uStack_100 = puVar3[2];
    uStack_fc = puVar3[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
  }
  local_58 = local_b8;
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
    if (puVar4 == &local_a8) goto LAB_1408d0a66;
  }
  local_108 = *(undefined4 *)puVar4;
  uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_108);
LAB_1408d0a66:
  local_50 = &local_a8;
  if (((int)local_68[0] < 2) || (puVar6 = (undefined8 *)local_60[1], puVar6 != &local_98)) {
    local_108 = *(undefined4 *)puVar6;
    uStack_104 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  local_48 = &local_98;
  if (puVar2 != local_88) {
    local_108 = *puVar2;
    uStack_104 = puVar2[1];
    uStack_100 = puVar2[2];
    uStack_fc = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_108);
  }
  local_40 = local_88;
  uVar5 = CONCAT44(uVar8,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,3,uVar5,&local_58);
  uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar2 != local_78) {
    local_108 = *puVar2;
    uStack_104 = puVar2[1];
    uStack_100 = puVar2[2];
    uStack_fc = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
  }
  local_38 = local_78;
  FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar8,DAT_1419fe568),&local_40);
  local_c8 = 0x19;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

