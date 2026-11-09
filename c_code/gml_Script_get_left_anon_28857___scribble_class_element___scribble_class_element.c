// gml_Script_get_left_anon_28857___scribble_class_element___scribble_class_element @ 0x14011d6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_left_anon_28857___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  byte local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_70 = 
  "gml_Script_region_get_bboxes@anon@23725@__scribble_class_element@__scribble_class_element";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2ff;
  _eh_vector_constructor_iterator_(&local_50,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_34 = 0;
  local_40 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcde0) {
    _Init_thread_header(&DAT_141ddcde0);
    if (DAT_141ddcde0 == -1) {
      DAT_141ddcee8 = (longlong *)FUN_140e63aa0(DAT_141a05168);
      _Init_thread_footer(&DAT_141ddcde0);
    }
  }
  if (DAT_141ddc076 == '\0') {
    FUN_140e64380(DAT_141ddcee8,
                  "gml_Script_region_get_bboxes@anon@23725@__scribble_class_element@__scribble_class_element"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_region_get_bboxes@anon@23725@__scribble_class_element@__scribble_class_element"
                 );
  }
  local_68 = 0x301;
  if (DAT_141ddc076 == '\0') {
    DAT_141ddc076 = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddcee8 + 0x10))(DAT_141ddcee8,DAT_141a055d8);
    FUN_140e609c0(DAT_141ddcee8);
    puVar4 = (undefined4 *)FUN_140e8da20(&local_40,param_1,0);
    if (puVar4 != puVar3) {
      local_98 = *puVar4;
      uStack_94 = puVar4[1];
      uStack_90 = puVar4[2];
      uStack_8c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_98);
    }
    FUN_140e60910(1);
  }
  local_68 = 0x303;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_98 = _DAT_1419df7c0;
  uStack_94 = uRam00000001419df7c4;
  uStack_90 = uRam00000001419df7c8;
  uStack_8c = uRam00000001419df7cc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_98);
  local_res8 = &local_50;
  puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_b8,1,uVar5,&local_res8);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar6 != &local_a8) {
    local_98 = *(undefined4 *)puVar6;
    uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
  }
  local_68 = 0x304;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_res8 = &local_a8;
  ppuVar8 = &local_res8;
  uVar7 = CONCAT44(uVar2,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_68 = 0x304;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddcee8 + 8))(DAT_141ddcee8,DAT_141a055d8);
    if (puVar6 == param_3) goto LAB_14011da71;
    local_98 = *(undefined4 *)puVar6;
    uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
  }
  else {
    local_68 = 0x306;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
    uVar2 = FUN_140e4a740(uVar5);
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_a8,DAT_141a05ec8,uVar2,&local_60,uVar7,uVar9);
    FUN_140e87440(&local_60,DAT_141a050f8,0x80000000,&local_88,uVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    if (&local_88 == param_3) goto LAB_14011da71;
    local_98 = (undefined4)local_88;
    uStack_94 = local_88._4_4_;
    uStack_90 = uStack_80;
    uStack_8c = uStack_7c;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_98);
LAB_14011da71:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

