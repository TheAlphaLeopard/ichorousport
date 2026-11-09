// gml_Object_oTutorialFallIn_Alarm_2 @ 0x140dfa9e0

void gml_Object_oTutorialFallIn_Alarm_2(longlong *param_1,ulonglong param_2)

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
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  ulonglong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_e0 = "gml_Object_oTutorialFallIn_Create_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_d8 = 2;
  FUN_140e98b30(local_res8,local_res10);
  local_d8 = 4;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3fc999999999999a;
  local_d8 = 6;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_d8 = 7;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_d8 = 9;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_d8 = 10;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd138);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0xc010000000000000;
  local_d8 = 0xc;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  gml_Script_jb_stack_layer_stop(local_res8,local_res10,&local_f8,0,0);
  local_d8 = 0xe;
  uStack_bc = 0xf;
  local_c8 = 0x1000000000000ff;
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (0 < iVar2) {
    do {
      local_d8 = 0xf;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5eb8);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
      plVar9 = local_res8;
      uVar10 = local_res10;
      FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_b8,local_res8,local_res10);
      dVar7 = local_b8;
      if ((local_ac & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_b8);
      }
      dVar8 = local_a8;
      if ((local_9c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_a8);
      }
      uVar3 = FUN_140e4a740(uVar5);
      uVar5 = FUN_140ea8b20(&local_f8,uVar3,(longlong)dVar8,(longlong)dVar7);
      FUN_140e87440(uVar5,DAT_1419f6118,0x80000000,&local_88,(ulonglong)plVar9 & 0xffffffffffffff00,
                    uVar10 & 0xffffffffffffff00);
      cVar1 = FUN_140e491e0(&local_88);
      uVar10 = local_res10;
      if (cVar1 != '\0') {
        local_d8 = 0x10;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_8c = 6;
        local_98 = uVar10;
        uVar5 = FUN_140e5c910();
        FUN_140e42c10(uVar5,uVar10);
        local_res18[0] = &local_98;
        FUN_140edd0e0(local_res8,local_res10,1,local_res18);
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_d8 = 0x14;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd4b8);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_c8,gml_Object_oTutorialFallIn_Step_0,local_res8);
  if (&local_c8 != puVar4) {
    local_58 = (undefined4)local_c8;
    uStack_54 = local_c8._4_4_;
    uStack_50 = uStack_c0;
    uStack_4c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

