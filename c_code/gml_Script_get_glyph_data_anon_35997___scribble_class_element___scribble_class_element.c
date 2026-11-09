// gml_Script_get_glyph_data_anon_35997___scribble_class_element___scribble_class_element @ 0x1401296b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_glyph_data_anon_35997___scribble_class_element___scribble_class_element
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
  undefined8 *local_res8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_get_text@anon@35500@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x456;
  FUN_140041df0(local_68,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x456;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 0x456;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
    if ((int)local_68[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_60;
    }
    if (puVar4 != puVar6) {
      local_58 = *(undefined4 *)puVar4;
      uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_50 = *(undefined4 *)(puVar4 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_58);
    }
  }
  local_38 = 0x458;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_58 = _DAT_1419df7c0;
  uStack_54 = uRam00000001419df7c4;
  uStack_50 = uRam00000001419df7c8;
  uStack_4c = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
  local_res8 = &local_88;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_a8,1,uVar5,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_98) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_58);
  }
  local_38 = 0x459;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_res8 = &local_98;
  ppuVar10 = &local_res8;
  uVar9 = CONCAT44(uVar3,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_38 = 0x459;
    if (param_3 == &DAT_141dcb538) goto LAB_140129aa4;
    local_58 = (undefined4)DAT_141dcb538;
    uStack_54 = DAT_141dcb538._4_4_;
    uStack_50 = DAT_141dcb540;
    uStack_4c = DAT_141dcb544;
    goto LAB_140129a79;
  }
  local_38 = 0x45a;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  FUN_140e87440(&local_98,DAT_141a06028,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if (((int)local_68[0] < 1) || (puVar8 = (undefined8 *)*local_60, puVar8 != &local_88)) {
    local_58 = *(undefined4 *)puVar8;
    uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_50 = *(undefined4 *)(puVar8 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  local_res8 = &local_88;
  switch(local_8c) {
  default:
switchD_140129a17_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_98;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_98 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140129a17_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_98);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar8 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_a8,1,&local_78,&local_res8);
  if (puVar8 != param_3) {
    local_58 = *(undefined4 *)puVar8;
    uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_50 = *(undefined4 *)(puVar8 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
LAB_140129a79:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
LAB_140129aa4:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar8 = local_60;
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
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

