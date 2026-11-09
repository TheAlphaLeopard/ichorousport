// gml_Script_get_reveal_anon_37350___scribble_class_element___scribble_class_element @ 0x14012b110

undefined8 *
gml_Script_get_reveal_anon_37350___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  local_c0 = 
  "gml_Script_pre_update_typist@anon@36754@__scribble_class_element@__scribble_class_element";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x484;
  uVar9 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar6 = local_res10;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x486;
  local_a4 = 6;
  local_b0 = local_res10;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,uVar6);
  local_b8 = 0x488;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_a0) goto LAB_14012b256;
  }
  local_58 = *(undefined4 *)puVar5;
  uStack_54 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_50 = *(undefined4 *)(puVar5 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_58);
LAB_14012b256:
  local_70 = &local_a0;
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_d8,1,CONCAT44(uVar9,DAT_1419fcb88),&local_70);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_b8 = 0x48a;
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e63cb0(&local_58,&local_res8,&local_res10,puVar8);
    if (0 < iVar3) {
      do {
        local_b8 = 0x48d;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05978);
        uVar6 = local_res10;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        local_84 = 6;
        local_90 = uVar6;
        uVar7 = FUN_140e5c910();
        FUN_140e42c10(uVar7,uVar6);
        local_68 = &local_90;
        local_60 = &local_b0;
        FUN_140e63610(local_res8,local_res10,&local_e8,2,uVar4,&local_68);
        cVar2 = FUN_140e643f0(&local_58,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(&local_58,&local_res8,&local_res10);
    if (local_48 != 0) {
      FUN_140e4cd60();
    }
  }
  plVar1 = local_res8;
  local_b8 = 0x491;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = plVar1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,plVar1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

