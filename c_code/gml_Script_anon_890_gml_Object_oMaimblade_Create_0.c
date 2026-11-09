// gml_Script_anon_890_gml_Object_oMaimblade_Create_0 @ 0x140b46c10

undefined8 *
gml_Script_anon_890_gml_Object_oMaimblade_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *local_res18 [2];
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_84;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_a0 = "gml_Script_anon@533@gml_Object_oMaimblade_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x1d;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = (undefined1 *)0x0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x1f;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4068);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_98 = 0x20;
    ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4068);
    uStack_dc = 0xd;
    local_e8 = (undefined1 *)0x3ff0000000000000;
    if (&local_e8 != ppuVar4) {
      local_d8 = (undefined1 *)0x3ff0000000000000;
      uStack_d0 = uStack_e0;
      uStack_cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar4);
      }
      FUN_140041b80(ppuVar4,&local_d8);
    }
    local_98 = 0x22;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uStack_dc = 0xf;
    local_e8 = (undefined1 *)0x1000000000000ee;
    local_d8 = (undefined1 *)0x1000000000000ee;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xf;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_d8);
    local_res18[0] = &local_90;
    ppuVar8 = local_res18;
    uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,ppuVar8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_98 = 0x22;
    }
    else {
      local_98 = 0x23;
      uStack_cc = 0xf;
      local_d8 = (undefined1 *)0x100000000000106;
      ppuVar8 = (undefined8 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_d8,DAT_141a0a958,0x80000000,&local_70,uVar6,ppuVar8);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      uStack_cc = 0;
      local_d8 = &DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(&local_70,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar2 == 0) {
        local_98 = 0x23;
      }
      else {
        local_98 = 0x25;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4058);
        if (puVar5 != &local_b8) {
          local_e8 = (undefined1 *)*puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_e8);
        }
        local_98 = 0x26;
        uStack_cc = 0;
        local_d8 = (undefined1 *)0x0;
        iVar2 = FUN_140e851f0(&local_b8,&local_d8,DAT_141955260,1);
        if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if (iVar2 != -2 && iVar2 < 1) {
          local_98 = 0x27;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0;
          local_bc = 5;
          uStack_cc = 0xf;
          local_d8 = (undefined1 *)0x100000000000106;
          uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_d8,DAT_141a0a958,0x80000000,&local_70,uVar6,uVar9);
          if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_70,DAT_141a0ab38,0x80000000,&local_80,uVar6,
                        uVar9 & 0xffffffffffffff00);
          uVar7 = (undefined4)(uVar6 >> 0x20);
          uStack_cc = local_74;
          uStack_d0 = local_78;
          if ((1 << ((byte)local_74 & 0x1f) & 0x46U) == 0) {
            local_d8 = local_80;
          }
          else {
            FUN_1400419b0(&local_d8,&local_80);
          }
          uStack_dc = 0;
          local_e8 = (undefined1 *)0x3fe0000000000000;
          FUN_140042560(&local_d8,&local_e8);
          if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = local_d8;
          uStack_e0 = uStack_d0;
          uStack_dc = uStack_cc;
          if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_90);
          }
          FUN_140041b80(&local_90,&local_e8);
          if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_res18[0] = &local_90;
          ppuVar8 = local_res18;
          uVar6 = CONCAT44(uVar7,DAT_1419fe728);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,ppuVar8);
          if (puVar5 != &local_b8) {
            local_e8 = (undefined1 *)*puVar5;
            uStack_e0 = *(undefined4 *)(puVar5 + 1);
            uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_e8);
          }
        }
        local_98 = 0x29;
        uStack_dc = 0;
        local_e8 = (undefined1 *)0x0;
        iVar2 = FUN_140e851f0(&local_b8,&local_e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if (0 < iVar2) {
          local_98 = 0x2a;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0;
          local_bc = 5;
          uStack_dc = 0xf;
          local_e8 = (undefined1 *)0x1000000000000ee;
          FUN_140e87440(&local_e8,DAT_1419f5a18,0x80000000,&local_60,uVar6 & 0xffffffffffffff00,
                        (ulonglong)ppuVar8 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_res18[0] = &local_b8;
          uStack_dc = 0xf;
          local_e8 = (undefined1 *)0x1000000000000ee;
          uVar3 = FUN_140069500(&local_e8);
          FUN_140e63610(uVar3,param_2,&local_c8,1,&local_60,local_res18);
          if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
        }
      }
    }
  }
  else {
    local_98 = 0x1f;
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

