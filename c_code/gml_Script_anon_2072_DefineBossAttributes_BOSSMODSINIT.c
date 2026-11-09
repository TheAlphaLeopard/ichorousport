// gml_Script_anon_2072_DefineBossAttributes_BOSSMODSINIT @ 0x140237120

undefined8 *
gml_Script_anon_2072_DefineBossAttributes_BOSSMODSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_res8;
  ulonglong local_res10;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_70 = "gml_Script_anon@1076@DefineBossAttributes@BOSSMODSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x28;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*param_5;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  plVar6 = local_res8;
  uVar7 = local_res10;
  FUN_140e87170(plVar5,DAT_141a1f580,0x80000000,&local_98,local_res8,local_res10);
  local_88 = local_98;
  uStack_80 = uStack_90;
  uStack_7c = uStack_8c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_88);
  local_68 = 0x29;
  iVar3 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_b8);
  if (0 < iVar3) {
    do {
      local_68 = 0x2b;
      uStack_7c = 6;
      local_88 = local_res8;
      uVar7 = uVar7 & 0xffffffffffffff00;
      plVar6 = (longlong *)((ulonglong)plVar6 & 0xffffffffffffff00);
      FUN_140e87440(&local_88,DAT_141a0a828,0x80000000,&local_a8,plVar6,uVar7);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (param_4 < 1) {
        plVar5 = &DAT_1419df7b0;
      }
      else {
        plVar5 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar3 = FUN_140e851f0(&local_a8,plVar5,DAT_141955260,0);
      if (iVar3 == 0) {
        local_68 = 0x2b;
      }
      else {
        local_68 = 0x2d;
        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        FUN_140e609c0(local_res8);
        if (param_4 < 1) {
          plVar5 = &DAT_1419df7b0;
        }
        else {
          plVar5 = (longlong *)*param_5;
        }
        if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 4) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x30);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        FUN_1400462a0(uVar4,plVar5);
        FUN_140e60910(1);
      }
      cVar2 = FUN_140e643f0(local_60,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_60,&local_res8,&local_res10);
  if (local_50 != 0) {
    FUN_140e4cd60();
    local_50 = 0;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

