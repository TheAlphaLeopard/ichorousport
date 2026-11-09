// gml_Script_WindowModeTick @ 0x14028d820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_WindowModeTick
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_60 = "gml_Script_WindowSetMode";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x51;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_6c = 0xffffff;
  local_78 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e10);
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ea0);
  local_cc = 0;
  local_d8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x53;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14028d93b:
    local_c8 = *puVar7;
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_c8);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_78) goto LAB_14028d93b;
  }
  FUN_140e87930(uVar3,DAT_141a57fe0,0x80000000,&local_78);
  local_58 = 0x55;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_bc = 0;
  local_c8 = 0x4000000000000000;
  iVar2 = FUN_140e851f0(puVar7,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar9 = CONCAT44(uVar10,DAT_141a57fc0);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,0,uVar9,0);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_58 = 0x57;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      local_c8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_c0 = uRam00000001419df7a8;
      uStack_bc = uRam00000001419df7ac;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
      local_50 = &local_b8;
      uVar3 = CONCAT44(uVar10,DAT_141a57f00);
      FUN_140e634e0(param_1,param_2,&local_98,1,uVar3,&local_50);
      uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58 = 0x58;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_c8,gml_Script_WindowApplyMode,0);
      if (&local_c8 != puVar4) {
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_88);
      }
      FUN_140e60910(1);
      if (puVar4 != &local_b8) {
        local_88 = *(undefined4 *)puVar4;
        uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_80 = *(undefined4 *)(puVar4 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_88);
      }
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_50 = &local_b8;
      if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_a8)) {
        local_88 = *(undefined4 *)puVar8;
        uStack_84 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_80 = *(undefined4 *)(puVar8 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_88);
      }
      local_48 = &local_a8;
      FUN_140e609c0(DAT_141a729d8);
      puVar6 = (undefined4 *)
               FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar10,DAT_1419fd6d8),&local_50);
      if (puVar6 != puVar5) {
        local_88 = *puVar6;
        uStack_84 = puVar6[1];
        uStack_80 = puVar6[2];
        uStack_7c = puVar6[3];
        if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_88);
      }
      FUN_140e60910(1);
      local_58 = 0x59;
      goto LAB_14028dcfc;
    }
  }
  local_58 = 0x5c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_b8)) {
    local_88 = *(undefined4 *)puVar8;
    uStack_84 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_88);
  }
  local_50 = &local_b8;
  gml_GlobalScript_GetNextGen(param_1,param_2,&local_d8,1,&local_50);
LAB_14028dcfc:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

