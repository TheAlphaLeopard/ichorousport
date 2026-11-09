// gml_Script_scribble_default_preprocessor_get @ 0x1404586c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_default_preprocessor_get
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_54;
  undefined8 local_50;
  byte local_44;
  
  local_70 = "gml_Script_scribble_color_set";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x11;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef70) &&
     (_Init_thread_header(&DAT_141ddef70), DAT_141ddef70 == -1)) {
    DAT_141ddef78 = (longlong *)FUN_140e63aa0(DAT_1419f7818);
    _Init_thread_footer(&DAT_141ddef70);
  }
  if (DAT_141ddc182 == '\0') {
    FUN_140e64380(DAT_141ddef78,"gml_Script_scribble_color_set");
    FUN_140e64380(param_1,"gml_Script_scribble_color_set");
  }
  local_68 = 0x13;
  if (DAT_141ddc182 == '\0') {
    DAT_141ddc182 = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddef78 + 0x10))(DAT_141ddef78,DAT_1419f77d8);
    FUN_140e609c0(DAT_141ddef78);
    uVar10 = 0;
    puVar4 = (undefined4 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_b8,0,0);
    if (puVar4 != puVar3) {
      local_88 = *puVar4;
      uStack_84 = puVar4[1];
      uStack_80 = puVar4[2];
      uStack_7c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    FUN_140e60910(1);
  }
  local_68 = 0x15;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 0x17;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddef78 + 8))(DAT_141ddef78,DAT_1419f77d8);
    if (puVar5 != &local_60) {
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      FUN_140041b80(&local_60,&local_88);
    }
    local_a8 = &local_60;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140458933:
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != &local_50) goto LAB_140458933;
    }
    local_a0 = &local_50;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar10,DAT_1419fcba8),&local_a8);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') goto LAB_140458cac;
    local_68 = 0x19;
    uVar6 = (**(code **)(*DAT_141ddef78 + 8))(DAT_141ddef78,DAT_1419f77d8);
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    FUN_140e98dc0(param_1,param_2,uVar6,puVar8);
    local_68 = 0x1c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  else {
    local_68 = 0x1f;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140458a32:
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      FUN_140041b80(&local_60,&local_88);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_60) goto LAB_140458a32;
    }
    local_a8 = &local_60;
    uVar9 = CONCAT44(uVar10,DAT_141a014a8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_a8);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') {
      local_68 = 0x21;
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      local_88 = _DAT_141dd2e48;
      uStack_84 = uRam0000000141dd2e4c;
      uStack_80 = uRam0000000141dd2e50;
      uStack_7c = DAT_141dd2e54;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
      local_a0 = &local_50;
      FUN_1401ef7f0(param_1,param_2,&local_98,1,&local_a0);
      uVar7 = local_8c;
      goto LAB_140458cac;
    }
    local_68 = 0x25;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddef78 + 8))(DAT_141ddef78,DAT_1419f77d8);
    if (puVar5 != &local_60) {
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      FUN_140041b80(&local_60,&local_88);
    }
    local_a8 = &local_60;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140458b94:
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != &local_50) goto LAB_140458b94;
    }
    local_a0 = &local_50;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar10,DAT_141a01138),&local_a8);
    iVar2 = FUN_140e851f0(uVar6,puVar5,DAT_141955260,0);
    if (iVar2 == 0) goto LAB_140458cac;
    local_68 = 0x27;
    uVar6 = (**(code **)(*DAT_141ddef78 + 8))(DAT_141ddef78,DAT_1419f77d8);
    if (param_4 < 2) {
      if (param_4 < 1) {
        param_5 = &DAT_1419df7b0;
      }
      else {
        param_5 = (undefined8 *)*param_5;
      }
    }
    else {
      puVar8 = (undefined8 *)param_5[1];
      param_5 = (undefined8 *)*param_5;
    }
    FUN_140e98ef0(param_1,param_2,uVar6,param_5,puVar8);
    local_68 = 0x2a;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  gml_Script_scribble_rgb_to_bgr(param_1,param_2,&local_b8,0,0);
LAB_140458cac:
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

