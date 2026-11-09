// gml_Script_Begin_anon_97307_ImGui_ImGui @ 0x1402c9410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_Begin_anon_97307_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_70 = "gml_Script_ProgressBar@anon@96738@ImGui@ImGui";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xb88;
  FUN_140041df0(local_60,param_4,4,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0xb88;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0xb88;
    if ((int)local_60[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  if ((int)local_60[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_60[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  if ((int)local_60[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_60[0] < 4) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[3];
      if (puVar2 == (undefined8 *)&DAT_141dce6c8) goto LAB_1402c95f2;
    }
    local_d8 = _DAT_141dce6c8;
    uStack_d4 = uRam0000000141dce6cc;
    uStack_d0 = uRam0000000141dce6d0;
    uStack_cc = DAT_141dce6d4;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_d8);
  }
LAB_1402c95f2:
  local_68 = 0xb89;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((int)local_60[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1402c9638:
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  else {
    puVar2 = (undefined8 *)*local_58;
    if (puVar2 != &local_b8) goto LAB_1402c9638;
  }
  local_50 = &local_b8;
  if ((int)local_60[0] < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1402c9687:
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
  }
  else {
    puVar2 = (undefined8 *)local_58[1];
    if (puVar2 != &local_a8) goto LAB_1402c9687;
  }
  local_48 = &local_a8;
  if ((int)local_60[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[2];
    if (puVar2 == &local_98) goto LAB_1402c9706;
  }
  local_d8 = *(undefined4 *)puVar2;
  uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_d8);
LAB_1402c9706:
  local_40 = &local_98;
  if (((int)local_60[0] < 4) || (puVar3 = (undefined8 *)local_58[3], puVar3 != &local_88)) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_d8);
  }
  local_38 = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c8,4,CONCAT44(uVar5,DAT_141a59730),&local_50);
  if (puVar3 != param_3) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar3 = local_58;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

