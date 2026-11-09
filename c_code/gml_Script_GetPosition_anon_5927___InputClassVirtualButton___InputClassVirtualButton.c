// gml_Script_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton @ 0x1400577c0

undefined8 *
gml_Script_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_Circle@anon@5393@__InputClassVirtualButton@__InputClassVirtualButton";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xaf;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_58 = 0xb1;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe668);
    uStack_7c = 0xd;
    local_88 = 0x3ff0000000000000;
    if (&local_88 != puVar3) {
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = uStack_80;
      uStack_6c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_78);
    }
    local_58 = 0xb2;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe418);
    FUN_140e609c0(param_1);
    puVar3 = &DAT_1419df7b0;
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
      if (param_4 < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*param_5;
      }
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      puVar8 = (undefined8 *)*param_5;
    }
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_88);
    }
    FUN_1400462a0(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb3;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4d8);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
      if (param_4 < 2) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)param_5[1];
      }
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      puVar8 = (undefined8 *)param_5[1];
    }
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_88);
    }
    FUN_1400462a0(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb4;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe228);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
      if (param_4 < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*param_5;
      }
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      puVar8 = (undefined8 *)*param_5;
    }
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_88);
    }
    FUN_1400460e0(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe678);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
      if (param_4 < 2) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)param_5[1];
      }
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      puVar8 = (undefined8 *)param_5[1];
    }
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_88);
    }
    FUN_1400460e0(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb6;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe278);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
    }
    uStack_7c = 0;
    local_88 = 0x4000000000000000;
    FUN_140042560(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb7;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3f8);
    FUN_140e609c0(param_1);
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
    }
    uStack_7c = 0;
    local_88 = 0x4000000000000000;
    FUN_140042560(&local_88,puVar5);
    if (&local_88 != puVar4) {
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
    local_58 = 0xb8;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe328);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    if (puVar5 != puVar4) {
      local_78 = *(undefined4 *)puVar5;
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_70 = *(undefined4 *)(puVar5 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    FUN_140e60910(1);
    local_58 = 0xb9;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe528);
    FUN_140e609c0(param_1);
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    if (puVar5 != puVar4) {
      local_78 = *(undefined4 *)puVar5;
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_70 = *(undefined4 *)(puVar5 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    FUN_140e60910(1);
    local_58 = 0xba;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe368);
    FUN_140e609c0(param_1);
    if (2 < param_4) {
      puVar3 = (undefined8 *)param_5[2];
    }
    if (puVar3 != puVar4) {
      local_78 = *(undefined4 *)puVar3;
      uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_70 = *(undefined4 *)(puVar3 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
    FUN_140e60910(1);
    local_58 = 0xbc;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe188);
    FUN_140e609c0(param_1);
    if (puVar6 != puVar7) {
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_78);
    }
    FUN_140e60910(1);
    local_58 = 0xbd;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6d8);
    FUN_140e609c0(param_1);
    if (puVar6 != puVar7) {
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_78);
    }
    FUN_140e60910(1);
    local_58 = 0xbf;
  }
  else {
    local_58 = 0xaf;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

