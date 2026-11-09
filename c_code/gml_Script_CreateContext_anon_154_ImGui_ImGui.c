// gml_Script_CreateContext_anon_154_ImGui_ImGui @ 0x140295150

undefined8 *
gml_Script_CreateContext_anon_154_ImGui_ImGui
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_ImColor";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 3;
  FUN_140041df0(local_58,param_4,4,param_5);
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddde48) &&
     (_Init_thread_header(&DAT_141ddde48), DAT_141ddde48 == -1)) {
    DAT_141ddde40 = (longlong *)FUN_140e63aa0(DAT_141a58250);
    _Init_thread_footer(&DAT_141ddde48);
  }
  local_38 = 3;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 4) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[3];
  }
  iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 3;
    if ((int)local_58[0] < 4) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0x3ff0000000000000;
  }
  if (DAT_141ddc0aa == '\0') {
    FUN_140e64380(DAT_141ddde40,"gml_Script_ImColor");
    FUN_140e64380(param_1,"gml_Script_ImColor");
  }
  FUN_140e643a0(param_1,DAT_141ddde40);
  local_38 = 0x1f;
  if (DAT_141ddc0aa == '\0') {
    DAT_141ddc0aa = '\x01';
    puVar3 = (ulonglong *)(**(code **)(*DAT_141ddde40 + 0x10))(DAT_141ddde40,DAT_141a58260);
    FUN_140e609c0(DAT_141ddde40);
    FUN_140e645a0(&local_78,gml_Script_ImColor,0);
    if (&local_78 != puVar3) {
      uStack_60 = CONCAT44(uStack_6c,uStack_70);
      local_68 = local_78;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
    puVar3 = (ulonglong *)(**(code **)(*DAT_141ddde40 + 0x10))(DAT_141ddde40,DAT_141a0a718);
    FUN_140e609c0(DAT_141ddde40);
    FUN_140e645a0(&local_78,gml_GlobalScript_ImGui,0);
    if (&local_78 != puVar3) {
      uStack_60 = CONCAT44(uStack_6c,uStack_70);
      local_68 = local_78;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xb;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58280);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (ulonglong *)local_50[3];
  }
  if (puVar4 != puVar3) {
    local_68 = *puVar4;
    uStack_60 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xc;
  if ((int)local_58[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[2];
  }
  iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 0x11;
    pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58230);
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_50;
    }
    uVar6 = FUN_140e4a8b0(puVar8);
    iVar2 = FUN_140ec5c20(uVar6);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
    *pdVar5 = (double)iVar2;
    local_38 = 0x12;
    pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58270);
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_50;
    }
    uVar6 = FUN_140e4a8b0(puVar8);
    iVar2 = FUN_140ec5c10(uVar6);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
    *pdVar5 = (double)iVar2;
    local_38 = 0x13;
    pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58220);
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_50;
    }
    uVar6 = FUN_140e4a8b0(puVar8);
    iVar2 = FUN_140ec5c00(uVar6);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
    *pdVar5 = (double)iVar2;
    local_38 = 0x15;
    if ((int)local_58[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[1];
    }
    iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_38 = 0x18;
      if (0 < (int)local_58[0]) {
        puVar9 = (ulonglong *)*local_50;
      }
      uVar7 = FUN_140e4a8b0(puVar9);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_7c = 10;
      local_38 = 0x19;
      uStack_6c = 0;
      local_78 = 0;
      local_88 = uVar7 >> 0x18 & 0xff;
      iVar2 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (iVar2 < 1) goto LAB_140295935;
      local_38 = 0x1a;
      puVar9 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58280);
      FUN_140e609c0(param_1);
      uStack_6c = local_7c;
      uStack_70 = local_80;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
        local_78 = local_88;
      }
      else {
        FUN_1400419b0(&local_78,&local_88);
      }
      uStack_60 = uStack_60 & 0xffffffff;
      local_68 = 0x406fe00000000000;
      FUN_140046500(&local_78,&local_68);
      if ((1 << ((byte)(uStack_60 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if (&local_78 != puVar9) {
        uStack_60 = CONCAT44(uStack_6c,uStack_70);
        local_68 = local_78;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        FUN_140041b80(puVar9,&local_68);
      }
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
    }
    else {
      local_38 = 0x16;
      puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58280);
      FUN_140e609c0(param_1);
      if (1 < (int)local_58[0]) {
        puVar9 = (ulonglong *)local_50[1];
      }
      if (puVar9 != puVar3) {
        local_68 = *puVar9;
        uStack_60 = puVar9[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_68);
      }
    }
  }
  else {
    local_38 = 0xd;
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))();
    FUN_140e609c0(param_1);
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (ulonglong *)*local_50;
    }
    if (puVar4 != puVar3) {
      local_68 = *puVar4;
      uStack_60 = puVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
    FUN_140e60910(1);
    local_38 = 0xe;
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58270);
    FUN_140e609c0(param_1);
    if ((int)local_58[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (ulonglong *)local_50[1];
    }
    if (puVar4 != puVar3) {
      local_68 = *puVar4;
      uStack_60 = puVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
    FUN_140e60910(1);
    local_38 = 0xf;
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58220);
    FUN_140e609c0(param_1);
    if (2 < (int)local_58[0]) {
      puVar9 = (ulonglong *)local_50[2];
    }
    if (puVar9 != puVar3) {
      local_68 = *puVar9;
      uStack_60 = puVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
  }
  FUN_140e60910(1);
LAB_140295935:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_58[0]) {
    puVar8 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

