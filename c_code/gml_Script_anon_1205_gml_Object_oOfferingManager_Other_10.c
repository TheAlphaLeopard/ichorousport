// gml_Script_anon_1205_gml_Object_oOfferingManager_Other_10 @ 0x140b8abd0

undefined8 *
gml_Script_anon_1205_gml_Object_oOfferingManager_Other_10
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 local_60;
  byte local_54;
  undefined1 *local_50;
  undefined8 *local_48 [4];
  
  local_80 = "gml_Script_anon@4055@anon@1205@gml_Object_oOfferingManager_Other_10";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xa9;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xaa;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a0ab58,0x80000000,&local_98,uVar7,0);
  uStack_ac = 0;
  local_b8 = 0;
  iVar2 = FUN_140e851f0(&local_98,&local_b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0xd;
  if (iVar2 == -2 || 0 < iVar2) {
    local_c8 = 0;
  }
  else {
    local_c8 = 0x3ff0000000000000;
  }
  local_78 = 0xac;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar4,DAT_141a0a8a8,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,0);
  local_b8 = local_a8;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_50 = local_70;
  uVar3 = gml_Script_imgui_arrow_button(param_1,param_2,&local_d8,1,&local_50);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_78 = 0xad;
    cVar1 = FUN_140e491e0(&local_c8);
    if (cVar1 == '\0') {
      local_78 = 0xae;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((param_4 < 2) || (puVar5 = *(undefined8 **)(param_5 + 8), puVar5 != &local_60)) {
        local_b8 = *puVar5;
        uStack_b0 = *(undefined4 *)(puVar5 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_60);
        }
        FUN_140041b80(&local_60,&local_b8);
      }
      local_48[0] = &local_60;
      gml_Script_rolled_list_add(param_1,param_2,&local_e8,1,local_48);
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

