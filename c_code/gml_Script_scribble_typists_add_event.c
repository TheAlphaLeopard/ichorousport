// gml_Script_scribble_typists_add_event @ 0x1404921f0

uint * gml_Script_scribble_typists_add_event
                 (undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  ulonglong local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  uint local_88 [3];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined1 *local_50;
  uint *local_48;
  
  local_70 = "gml_Script_scribble_typist";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 4;
  FUN_140041df0(local_60,param_4,1,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 4;
  puVar6 = (uint *)&DAT_1419df7b0;
  uVar5 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_58;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 4;
    uStack_9c = 0xd;
    local_a8 = 0;
    if ((int)local_60[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (ulonglong *)*local_58;
      if (&local_a8 == puVar4) goto LAB_140492331;
    }
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_a0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
LAB_140492331:
  local_68 = 6;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_b8 = DAT_141a078e8 & 0xffffff;
  uStack_b4 = (int)(DAT_141a078e8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_9c = 0xf;
  local_a8 = CONCAT44(uStack_b4,DAT_141a078e8) & 0xffffffff00ffffff;
  uStack_b0 = uStack_a0;
  uStack_ac = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_50 = local_98;
  if (((int)local_60[0] < 1) || (puVar6 = (uint *)*local_58, puVar6 != local_88)) {
    local_b8 = *puVar6;
    uStack_b4 = puVar6[1];
    uStack_b0 = puVar6[2];
    uStack_ac = puVar6[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_b8);
  }
  local_48 = local_88;
  puVar6 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar7,DAT_1419fd6d8),&local_50
                                );
  if (puVar6 != param_3) {
    local_b8 = *puVar6;
    uStack_b4 = puVar6[1];
    uStack_b0 = puVar6[2];
    uStack_ac = puVar6[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar3 = local_58;
    do {
      puVar1 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

