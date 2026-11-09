// gml_Script_anon_6694___InputSystem___InputSystem @ 0x1400d1370

/* WARNING: Removing unreachable block (ram,0x0001400d162d) */

longlong *
gml_Script_anon_6694___InputSystem___InputSystem
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar8;
  undefined4 uVar9;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_res20 = 0;
  local_70 = "gml_Script___InputStringMatches";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 3;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_7c = 0;
  local_b8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_cc = 0;
  uVar7 = 0x3ff00000;
  local_d8 = 1.0;
  local_68 = 6;
  local_ac = 0;
  local_b0 = local_80;
  local_res20 = 1;
  uStack_90 = CONCAT44(7,(undefined4)uStack_90);
  local_98 = CONCAT44(local_98._4_4_,1);
  local_88 = local_b8;
  FUN_1400462a0(&local_b8,&local_98);
  if ((1 << ((byte)((ulonglong)uStack_90 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  iVar1 = FUN_140e4a740(&local_b8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  do {
    if (iVar1 < 1) {
      local_68 = 0xc;
      uVar7 = 0;
LAB_1400d160e:
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = (ulonglong)uVar7 << 0x20;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      _eh_vector_destructor_iterator_(&local_a8,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_78;
      return param_3;
    }
    uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    puVar6 = &DAT_1419df7b0;
    iVar1 = iVar1 + -1;
    local_68 = 8;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    iVar2 = FUN_140e4a740(&local_d8);
    if (iVar2 < param_4) {
      puVar5 = (undefined8 *)param_5[iVar2];
      if (puVar5 != &local_a8) goto LAB_1400d1514;
    }
    else {
      puVar5 = &DAT_1419df7b0;
LAB_1400d1514:
      local_98 = *puVar5;
      uStack_90 = puVar5[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_98);
    }
    local_res18 = &local_a8;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    pcVar8 = (code *)CONCAT44(uVar9,DAT_1419fcb18);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,pcVar8,&local_res18);
    iVar2 = FUN_140e851f0(uVar4,puVar6,DAT_141955260,0);
    if (iVar2 == 0) {
      local_68 = 8;
      goto LAB_1400d160e;
    }
    local_68 = 9;
    uVar3 = local_cc & 0xffffff;
    if (uVar3 == 0) {
LAB_1400d15eb:
      local_d8 = local_d8 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_d8 = (double)FUN_140e4b060(&local_d8);
        local_cc = 0;
        goto LAB_1400d15eb;
      }
      if (uVar3 == 7) {
        local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_d8 = (double)((longlong)local_d8 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_cc = 0;
          goto LAB_1400d15eb;
        }
        FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
      }
    }
  } while( true );
}

