// gml_Script_get_line_data_anon_35723___scribble_class_element___scribble_class_element @ 0x140129310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_line_data_anon_35723___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_get_wrapped@anon@35295@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x44e;
  _eh_vector_constructor_iterator_(&local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x450;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_58 = _DAT_1419df7c0;
  uStack_54 = uRam00000001419df7c4;
  uStack_50 = uRam00000001419df7c8;
  uStack_4c = uRam00000001419df7cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_58);
  local_res8 = &local_68;
  puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_98,1,uVar4,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != &local_88) {
    local_58 = *(undefined4 *)puVar5;
    uStack_54 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_50 = *(undefined4 *)(puVar5 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  local_38 = 0x451;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_res8 = &local_88;
  ppuVar7 = &local_res8;
  uVar6 = CONCAT44(uVar3,DAT_1419fcb88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_98,1,uVar6,ppuVar7);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_38 = 0x451;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_1401295d5;
  }
  local_38 = 0x452;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  FUN_140e87440(&local_88,DAT_141a055f8,0x80000000,&local_78,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  switch(local_7c) {
  default:
switchD_140129550_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_88;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_88 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140129550_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_88);
    uVar4 = FUN_140e87250(uVar3);
  }
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_98,0,&local_78,0);
  if (puVar5 != param_3) {
    local_58 = *(undefined4 *)puVar5;
    uStack_54 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_50 = *(undefined4 *)(puVar5 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
LAB_1401295d5:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

