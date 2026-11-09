// gml_Script_get_line_count_anon_36481___scribble_class_element___scribble_class_element @ 0x14012a140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_line_count_anon_36481___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_70 = 
  "gml_Script_get_glyph_data@anon@35997@__scribble_class_element@__scribble_class_element";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x467;
  FUN_140041df0(local_40,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x467;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 0x467;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
    if ((int)local_40[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_38[1];
    }
    if (puVar4 != puVar6) {
      local_a8 = *(undefined4 *)puVar4;
      uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_a0 = *(undefined4 *)(puVar4 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_a8);
    }
  }
  local_68 = 0x469;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_a8 = _DAT_1419df7c0;
  uStack_a4 = uRam00000001419df7c4;
  uStack_a0 = uRam00000001419df7c8;
  uStack_9c = uRam00000001419df7cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_a8);
  local_60 = &local_98;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_c8,1,uVar5,&local_60);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_b8) {
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_a8);
  }
  local_68 = 0x46a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_60 = &local_b8;
  ppuVar10 = &local_60;
  uVar9 = CONCAT44(uVar3,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_68 = 0x46a;
    if (param_3 == &DAT_1419df7b0) goto LAB_14012a57f;
    local_a8 = (undefined4)DAT_1419df7b0;
    uStack_a4 = DAT_1419df7b0._4_4_;
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    goto LAB_14012a554;
  }
  local_68 = 0x46b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  FUN_140e87440(&local_b8,DAT_141a05d48,0x80000000,&local_50,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_40[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14012a45a:
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
  }
  else {
    puVar4 = (undefined8 *)*local_38;
    if (puVar4 != &local_98) goto LAB_14012a45a;
  }
  local_60 = &local_98;
  if (((int)local_40[0] < 2) || (puVar8 = (undefined8 *)local_38[1], puVar8 != &local_88)) {
    local_a8 = *(undefined4 *)puVar8;
    uStack_a4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_a0 = *(undefined4 *)(puVar8 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  local_58 = &local_88;
  switch(local_ac) {
  default:
switchD_14012a4f2_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_b8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_b8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14012a4f2_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_b8);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar8 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_c8,2,&local_50,&local_60);
  if (puVar8 != param_3) {
    local_a8 = *(undefined4 *)puVar8;
    uStack_a4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_a0 = *(undefined4 *)(puVar8 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar8 + 0xc);
LAB_14012a554:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
LAB_14012a57f:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar8 = local_38;
    do {
      puVar4 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

