// gml_Object_oTutorialFallIn_Create_0 @ 0x140df8e40

void gml_Object_oTutorialFallIn_Create_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  longlong *local_res8;
  ulonglong local_res10;
  ulonglong *local_res18 [2];
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  ulonglong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_a0 = "gml_Object_oTutorialDash_Create_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_b8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_98 = 2;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_98 = 3;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_98 = 6;
  local_74 = 0xf;
  local_80 = 0x1000000000000ff;
  iVar2 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_80);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if (0 < iVar2) {
    do {
      local_98 = 7;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5eb8);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_c8,local_res8,local_res10);
      plVar9 = local_res8;
      uVar10 = local_res10;
      FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_d8,local_res8,local_res10);
      dVar7 = local_d8;
      if ((local_cc & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_d8);
      }
      dVar8 = local_c8;
      if ((local_bc & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_c8);
      }
      uVar3 = FUN_140e4a740(uVar5);
      uVar5 = FUN_140ea8b20(&local_e8,uVar3,(longlong)dVar8,(longlong)dVar7);
      FUN_140e87440(uVar5,DAT_1419f6118,0x80000000,&local_90,(ulonglong)plVar9 & 0xffffffffffffff00,
                    uVar10 & 0xffffffffffffff00);
      cVar1 = FUN_140e491e0(&local_90);
      uVar10 = local_res10;
      if (cVar1 != '\0') {
        local_98 = 8;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_ac = 6;
        local_b8 = uVar10;
        uVar5 = FUN_140e5c910();
        FUN_140e42c10(uVar5,uVar10);
        local_res18[0] = &local_b8;
        FUN_140edd0e0(local_res8,local_res10,1,local_res18);
      }
      cVar1 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

