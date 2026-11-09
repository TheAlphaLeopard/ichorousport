// gml_GlobalScript_TrueStateSyst @ 0x14061bdd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_TrueStateSyst(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_90 = "gml_Script_anon@43214@DefineTrinkets@TRINKETSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x605;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_c8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x606;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419ff9c8,0x80000000,&local_48,uVar6,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 0;
  local_e8 = 0x3ff0000000000000;
  iVar2 = FUN_140e851f0(&local_48,&local_e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 < 1) {
    local_88 = 0x608;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if (puVar3 != &local_c8) {
      local_e8 = *puVar3;
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    local_70 = &local_c8;
    local_e8 = CONCAT44(uRam0000000141dd4f2c,_DAT_141dd4f28);
    uStack_e0 = uRam0000000141dd4f30;
    uStack_dc = DAT_141dd4f34;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_68 = local_b8;
    ppuVar8 = &local_70;
    uVar6 = CONCAT44(uVar7,DAT_1419fcba8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_88 = 0x609;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      puVar3 = (undefined8 *)FUN_140e8da20(&local_38,param_1,0);
      if (puVar3 != &local_a8) {
        local_e8 = *puVar3;
        uStack_e0 = *(undefined4 *)(puVar3 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_e8);
      }
      FUN_140e87930(uVar4,DAT_1419ffe48,0x80000000,&local_a8);
    }
    local_88 = 0x60b;
    uStack_dc = 0xf;
    local_e8 = 0x1000000000000ee;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_e8,DAT_141a1f170,0x80000000,&local_80,uVar6,uVar9);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140162d40(&local_80,5);
    uStack_dc = 0xf;
    local_e8 = 0x1000000000000ee;
    FUN_140e87930(&local_e8,DAT_141a1f170,0x80000000,&local_80);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_88 = 0x60c;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ffe48,0x80000000,&local_58,uVar6,uVar9 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    uStack_dc = uStack_4c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
    local_70 = &local_c8;
    local_e8 = CONCAT44(uRam00000001419e6a64,_DAT_1419e6a60);
    uStack_e0 = uRam00000001419e6a68;
    uStack_dc = uRam00000001419e6a6c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_68 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar7,DAT_1419fe568),&local_70);
  }
  else {
    local_88 = 0x606;
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

